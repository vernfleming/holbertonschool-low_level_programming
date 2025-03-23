#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct print_func {
    char pf;              /* Format character */
    void (*f)(va_list args); /* Function pointer to handle the argument */
} print_funct;

/* Function prototypes */
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);
int _putchar(char c);

#endif /* VARIADIC_FUNCTIONS_H */
