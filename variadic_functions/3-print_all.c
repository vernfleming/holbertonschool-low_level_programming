#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - Prints the arguments based on the chars in the format
 *
 * @format: A string/set of chars which specify what data types to print
 *
 * Description: Prints the arguments based on the chars in the format string
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
 * get_print_func_fp - Function pointer to the right print function
 *
 * @s: String from format to compare
 *
 * Description: Function pointer to the right print function
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
 * print_char - Prints a character
 *
 * @c: Character
 *
 * Description: Prints a character
 *
 * Return: void
 */

void print_char(char c);
{
	_putchar(c);
}

/**
 * print_int - Prints an integer
 *
 * @s: String of int to print
 *
 * Description: Prints an integer
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
 * print_float - Prints a float
 *
 * @s: String of float to print
 *
 * Description: Prints a float
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
 * print_str - Prints a string
 *
 * @s: String to print
 *
 * Description: Prints a string
 *
 * Return: void
 */

void print_str(char *s)
{
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
