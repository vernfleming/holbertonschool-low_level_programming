#include "main.h"
#include <stdio.h>

/**
 * extra_param - recursively checks for the natural square root of a number
 * @n: number to find the square root of
 * @param: current guess for the square root
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */

static int extra_param(int n, int param)
{
if (param * param > n)
return (-1);
if (param * param == n)
return (param);
return (extra_param(n, param + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */


int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (extra_param(n, 0));
}
