#include "main.h"

/**
 * _isalpha - identifies if character is alphan
 * @c: character to be checked
 *
 * Return: 1 if c is alpha, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
