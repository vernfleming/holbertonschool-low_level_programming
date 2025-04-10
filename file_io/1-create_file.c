#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates file and writes text to it
 * @filename: name of file being created
 * @text_content: NULL-terminated string to write
 *
 * Return: 1 on success and -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		written = write(fd, text_content, len);
		if (written == -1 || written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
