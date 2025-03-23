#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints arguments
 *
 * @format: format
 * Description: as above
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list args;
char (*get_print_func_fp)(char *s);
int i = 0, j = 0;
va_start(args, format);
while (i < 4)
{
j = 0;
while (pfs[j].pf != '\0')
{
if (format[i] == pfs[j].pf
get_print_func_fp[j].f(va_args(args, char *);
j++;
}
i++;
va_end(args);
}
}

/**
 * get_print_func_fp - function pointer
 *
 * @s: string
 * Description: as above
 *
 * Return: void
 */

char (*get_print_func_fp)(char *s)
{
print_funct pfs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_str},
{NULL, NULL}
};
int i = 0;
while (pfs[i].pf != NULL)
{
if (*s == *pfs[i].pf)
return (pfs[i].f);
i++;
}
return (pfs[i].f);
}

/**
 * print_char - prints a char
 *
 * @c: char
 * Description: as above
 *
 * Return: void
 */

void print_char(char c);
{
_putchar(c);
}

/**
 * print_int - simply prints an integer
 *
 * @s: string of ints to print
 * Description: see above
 *
 * Return: void
 */

void print_int(char *s)
{
int n;
n = atoi(s);
printf("%d", n);
}

/**
 * print_float - prints a float
 *
 * @s: string of floats to print
 * Description: as above
 *
 * Return: void
 */

void print_float(char *s)
{
float n;
n = atof(s);
printf("%f", n);
}

/**
 * print_str - prints a string
 *
 * @s: string to be printed
 * Description: as above
 *
 * Return: void
 */

void print_str(char *s)
{
if (s == NULL)
s = "(nil)";
printf("%s", s);
}
