#include "main.h"

/**
 * swap_int - swaps two ints.
 * @a: Pointer to the second
 * @b: pointer to first
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
