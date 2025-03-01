#include "main.h"

/**
 * _atoi - converts string to int
 * @s: string
 * Return: int value of string
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int found_digit = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
found_digit = 1;
result = result * 10 + (*s - '0');
if (*(s + 1) < '0' || *(s + 1) > '9')
break;
}
else if (found_digit)
break;
s++;
}
return (result * sign);
}
