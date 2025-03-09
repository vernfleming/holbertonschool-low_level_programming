#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if string contains only digits
 * @str: input string
 *
 * Return: 1 if string is number, else 0
 */

int is_number(char *str)
{
int i = 0;
if (str[i] == '\0')
return (0);
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Adds positive numbers passed as args
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: 0 if success, 1 if an arg isnt number
 */

int main(int argc, char *argv[])
{
int sum = 0, i, num;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}
