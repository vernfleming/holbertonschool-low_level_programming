#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - Prints a string
 *
 * @separator: separator to separate strings
 * @n: number
 * Descriptions: as above
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
char *str;
if (separator == NULL)
separator = "";
va_start(args, n);
while (i < n)
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
if (i != n - 1)
printf("%s", separator);
i++;
}
va_end(args);
printf("\n");
}
