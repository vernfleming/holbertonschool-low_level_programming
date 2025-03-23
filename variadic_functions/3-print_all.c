#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format string
 * @format: A list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...) {
    unsigned int i = 0;
    va_list args;
    char *str;
    char c;
    int d;
    float f;
    int printed = 0;

    va_start(args, format);
    while (format && format[i] != '\0') {
        if (i > 0)
            printf(", ");
        
        switch (format[i]) {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                d = va_arg(args, int);
                printf("%d", d);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                printf("%s", str ? str : "(nil)");
                break;
            default:
                i++;
                continue;
        }
	printed = 1;
        i++;
    }
    va_end(args);
    printf("\n");
}
