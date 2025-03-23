#ifndef VAR_H
#define VAR_H

/**
 * description: Various function prototypes for handling variadic functions.
 */

/**
 * _putchar - Writes a character to standard output.
 * @c: The character to print.
 * Return: On success, 1 is returned, and on error, -1 is returned.
 */
int _putchar(char c);

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * Return: The sum of all parameters, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to separate numbers.
 * @n: The number of integers to print.
 * Return: None.
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - Prints strings followed by a separator.
 * @separator: The string to separate strings.
 * @n: The number of strings to print.
 * Return: None.
 */
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * description: Various function prototypes for handling different types
 * in the print_func struct.
 */

/**
 * struct print_func - A struct to map type identifiers to print functions.
 * @pf: The type identifier (e.g., 'c' for char, 'i' for integer, etc.).
 * @f: The function that prints the corresponding type.
 */
typedef struct print_func
{
    char *pf;             /**< Type identifier */
    void (*f)(char *s);   /**< Function pointer to print the type */
} print_func;

/**
