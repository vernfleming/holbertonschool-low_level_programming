#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

int open_file_from(const char *filename);
int open_file_to(const char *filename);
void copy_file(int fd_from, int fd_to, const char *file_from,
	       const char *file_to, char *first_chunk, ssize_t first_bytes);
void close_fd(int fd);

/**
 * main - entry point to function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success or exits with error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t first_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file_from(argv[1]);

	first_bytes = read(fd_from, buffer, BUF_SIZE);
	if (first_bytes == -1)
	{
		close_fd(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open_file_to(argv[2]);

	copy_file(fd_from, fd_to, argv[1], argv[2], buffer, first_bytes);

	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}

/**
 * open_file_from - opens the source file
 * @filename: name of the source file
 *
 * Return: file descriptor or exits with code 98
 */
int open_file_from(const char *filename)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_file_to - opens destination file
 * @filename: name of destination file
 *
 * Return: file descriptor or exits with code 99
 */
int open_file_to(const char *filename)
{
	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - simply reads from one file and writes to another
 * @fd_from: file descriptor of source file
 * @fd_to: file descriptor of destination file
 * @file_from: name of source file
 * @file_to: name of destination file
 * @first_chunk: the first bytes read
 * @first_bytes: how many bytes were read
 */
void copy_file(int fd_from, int fd_to, const char *file_from,
	       const char *file_to, char *first_chunk, ssize_t first_bytes)
{
	ssize_t r_bytes, w_bytes;

	w_bytes = write(fd_to, first_chunk, first_bytes);
	if (w_bytes == -1 || w_bytes != first_bytes)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((r_bytes = read(fd_from, first_chunk, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, first_chunk, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}

/**
 * close_fd - closes a file descriptor
 * @fd: file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
