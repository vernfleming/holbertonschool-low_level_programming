#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches an array for a number
 *
 * @array: array to be searched through
 * @size: size of array
 * @cmp: function that checks a number
 *
 * Description: as above
 *
 * Return: location of number in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int flag;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
while (i < size)
{
flag = cmp(array[i]);
if (flag != 0)
return (i);
i++;
}
return (-1);
}
