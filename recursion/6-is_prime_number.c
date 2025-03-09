#include "main.h"
#include <stdio.h>

/**
 * divideZero - helper function that checks if a number is divisible
 * @n: number to check
 * @i: factor being checked
 *
 * Return: 1 if n is prime, 0 if not.
 */


int divideZero(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (divideZero(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the number is prime, 0 if not
 * @n: number to check for being prime
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (divideZero(n, 2));
}
