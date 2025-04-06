#include "main.h"

/**
 * set_bit - sets the value of a bit
 * @n: pointer to the number
 * @index: the index of the bit
 *
 * Return: 1 if it actually worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
