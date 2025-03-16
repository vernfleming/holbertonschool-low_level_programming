#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints the dog data structure
 * @d: location of the dog data structure
 * Description: as above
 *
 * Return: void
 */

void print_dog(struct dog *d) {
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
} else
{
printf("Name: %s\n", d->name);
}
printf("Age: %.6f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
} else
{
printf("Owner: %s\n", d->owner);
}
}


