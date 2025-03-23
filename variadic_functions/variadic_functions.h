#ifndef VAR_H
#define VAR_H

/**
 * description: various function prototypes
 *
 */


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * description: various function prototype
 * print_func - what it says on the box
 */

typedef struct print_func
{
char *pf;
void (*f)(char *s);
}
print_func;

void print_char(char *s);
void print_int(char *s);
void print_float(char *s);
void print_str(char *s);

void (*get_print_func_fp)(char *s);

#endif

