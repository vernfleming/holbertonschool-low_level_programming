#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: starting value of the array
 * @max: ending value of the array
 *
 * Return: pointer to the newly created array, or NULL if failure
 */

int *array_range(int min, int max)
{
int *arr;
int size, i;
if (min > max)
return (NULL);
size = max - min + 1;
arr = malloc(sizeof(int) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = min + i;
}
return (arr);
}
