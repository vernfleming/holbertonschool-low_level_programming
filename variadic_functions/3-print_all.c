#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...) {
    unsigned int i = 0;
    va_list args;
    char *str;
    char c;
    int d;
    float f;
    int printed = 0;  /* To track if we need to print the separator */

    va_start(args, format);
    while (format && format[i] != '\0') {
        if (printed)  /* Print separator only if it's not the first element */
            printf(", ");

        switch (format[i]) {
            case 'c':
                c = va_arg(args, int);  /* char is promoted to int */
                printf("%c", c);
                break;
            case 'i':
                d = va_arg(args, int);
                printf("%d", d);
                break;
            case 'f':
                f = va_arg(args, double);  /* float is promoted to double */
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str)
                    printf("%s", str);
                else
                    printf("(nil)");
                break;
            default:
                i++;
                continue;
        }
        printed = 1;  /* Set printed to 1 once a value is printed */
        i++;
    }
    va_end(args);
    printf("\n");
}
