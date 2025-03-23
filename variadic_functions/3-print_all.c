#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - Prints a char
 * @args: Argument list
 */
void print_char(va_list args)
{
    _putchar(va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: Argument list
 */
void print_int(va_list args)
{
    int n = va_arg(args, int);
    int div = 1, temp;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    temp = n;
    while (temp / 10)
    {
        div *= 10;
        temp /= 10;
    }
    while (div)
    {
        _putchar((n / div) + '0');
        n %= div;
        div /= 10;
    }
}

/**
 * print_float - Prints a float (only 6 decimal places)
 * @args: Argument list
 */
void print_float(va_list args)
{
    double f = va_arg(args, double);
    int int_part = (int)f;
    int dec_part, i;

print_int((va_list) &int_part);
_putchar('.');    
f -= int_part;
for (i = 0; i < 6; i++)
f *= 10;
dec_part = (int)f;
print_int((va_list) &dec_part);
}

/**
 * print_str - Prints a string
 * @args: Argument list
 */
void print_str(va_list args)
{
char *s = va_arg(args, char *);
if (!s)
s = "(nil)";
while (*s)
_putchar(*s++);
}

/**
 * print_all - Prints any type of argument
 * @format: Format string specifying argument types
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j;
char *sep = "";
struct print_func {
char spec;
void (*func)(va_list);
} pfs[] = 
{
{'c', print_char}, {'i', print_int},
{'f', print_float}, {'s', print_str}, {'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (pfs[j].spec)
{
if (format[i] == pfs[j].spec)
{
while (*sep)
_putchar(*sep++);
pfs[j].func(args);
sep = ", ";
break;
}
j++;
}
i++;
}
va_end(args);
_putchar('\n');
}
