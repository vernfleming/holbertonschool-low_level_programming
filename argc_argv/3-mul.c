#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes two integers as args and multiplies them
 * @argc: Arg count
 * @argv: Arg vector
 * text
 * Return: 0 for success, 1 for an error
 */

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
