#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts str to int
 * @s: string
 *
 * Return: val of string
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int found_digit = 0;
int digit;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
found_digit = 1;
digit = *s - '0';
if (result > (INT_MAX - digit) / 10)
return (sign == 1 ? INT_MAX : INT_MIN);
result = result * 10 + digit;
if (*(s + 1) < '0' || *(s + 1) > '9')
break;
}
else if (found_digit)
break;
s++;
}
return (result *sign);
}
