#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - Iterates through an array and applies a functoin
 *
 * @array: array to be interated through
 * @size: size of array
 * @action: function that iterates through array
 *
 * Description: as above
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
