#include <unistd.h>

/**
 * _putchar - writes to output
 * @c: char
 *
 * Return: a putchar
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
