#include <stdlib.h>

/**
 * create_array - allocates memory for an array and initializes
 * @size: the number of elements in the array
 * @c: the character to initialize each element of the array
 *
 * Return: A pointer to the allocated memory, or NULL if 0
 */

char *create_array(unsigned int size, char c) {
char *arr;
unsigned int i;
if (size == 0)
return NULL;
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
return NULL;
for (i = 0; i < size; i++)
arr[i] = c;
return arr;
}
