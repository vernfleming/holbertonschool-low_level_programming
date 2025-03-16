#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alocates memory for an array and sets it to zero
 * @nmemb: number of elements in array
 * @size: size of each element
 * Description: as above
 * Return: a  pointer to the allocated memory, or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
{
((char *)ptr)[i] = 0;
}
return (ptr);
}
