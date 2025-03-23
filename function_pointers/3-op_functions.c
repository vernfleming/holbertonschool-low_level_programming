#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds a number to another
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Description: as above
 *
 * Return: sum of two numbers
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subtracts one number from another
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Description: as above
 *
 * Return: the diff between two numbers
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Description: as above
 *
 * Return: product of two numbers
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Description: as above
 *
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - finds remainder of a division
 *
 * @a: 1st number
 * @b: 2nd number
 *
 * Description: finds remainder of a division
 *
 * Return: remainder of two ints
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
