#ifndef VAR_H
#define VAR_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct print_func{
	char *pf;
	char (*f)(char *s);
};

void print_char(char *s);
void print_int(char *s);
void print_float(char *s);
void print_str(char *s);
void ((*get_print_func_fp)(char *s))(char *s);

#endif
