#include "main.h"

/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result * 2 + (*b - '0');
		b++;
	}

	return (result);
}
