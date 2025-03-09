#include "main.h"

/**
 * recursion_helper - helper function to find the square root recursively
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */

int recursion_helper(int n, int guess)
{
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (recursion_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find the square root of
 *
 * Return: natural square root of n, or -1 if n has no natural square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (recursion_helper(n, 0));
}
