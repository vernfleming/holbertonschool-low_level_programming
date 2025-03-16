#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory from the data structure dog_t
 * @d: Pointer to dog_t data structure
 * Description: as above
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
