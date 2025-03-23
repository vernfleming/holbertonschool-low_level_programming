#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - Prints anything based on the format provided.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char c;

    va_start(args, format);
    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (!str)
                    str = "(nil)";
                printf("%s", str);
                break;
            default:
                i++;
                continue;
        }
        if (format[i + 1])
            printf(", ");
        i++;
    }
    printf("\n");
    va_end(args);
}
