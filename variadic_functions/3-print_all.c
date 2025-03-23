#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0, j;
    int printed = 0;

    print_funct pfs[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_str},
        {0, NULL}  /* End of array */
    };

    va_start(args, format);

    while (format && format[i] != '\0')
    {
        j = 0;

        while (pfs[j].pf != 0)
        {
            if (format[i] == pfs[j].pf)
            {
                if (printed == 1)
                    printf(", ");
                pfs[j].f(args);  /* Call the function */
                printed = 1;
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

void print_char(va_list args)
{
    char c = va_arg(args, int);  /* char is promoted to int */
    printf("%c", c);
}

void print_int(va_list args)
{
    int i = va_arg(args, int);
    printf("%d", i);
}

void print_float(va_list args)
{
    float f = va_arg(args, double);  /* float is promoted to double */
    printf("%f", f);
}

void print_str(va_list args)
{
    char *s = va_arg(args, char *);
    if (s == NULL)
        printf("(nil)");
    else
        printf("%s", s);
}
