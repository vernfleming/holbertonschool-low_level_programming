#include <stdio.h>


/**
 * main - entry point of program
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
