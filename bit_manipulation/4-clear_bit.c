#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to number
 * @index: the index of the bit
 *
 * Return: 1 if it actualy worked, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
