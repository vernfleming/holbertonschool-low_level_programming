#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
char (*get_print_func_fp(char *s))(char *s);
void print_char(char c);
void print_int(char *s);
void print_float(char *s);
void print_str(char *s);

typedef struct print_func {
    char *pf;
    void (*f)(char *s);
} print_funct;


#endif
