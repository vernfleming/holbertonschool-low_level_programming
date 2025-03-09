#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: x^y, or -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
