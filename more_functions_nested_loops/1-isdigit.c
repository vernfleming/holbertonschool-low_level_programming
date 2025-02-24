#include "main.h"

/**
 * _isdigit - if character is a digit
 * @c: the characte
 *
 * Return: 1 if digit, 0 else
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
return (0);
}
