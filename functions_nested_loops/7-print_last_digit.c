#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: the number to get last digit from
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;

if (last_digit < 0)
last_digit = -last_digit;

_putchar(last_digit + '0');

return(last_digit);
}
