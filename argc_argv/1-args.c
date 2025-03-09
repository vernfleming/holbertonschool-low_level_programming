#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: Arg count
 * @argv: Arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
 return (0);
}
