#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_length - prints the string length
 *
 * @str: pointer to the start of a string
 * Description: as above
 * Return: len
 */

int string_length(char *str) {
int len = 0;
while (str[len] != '\0') {
len++;
}
return (len);
}

/**
 * *string_copy - copies a given string
 *
 * @src: pointer to the start of a source string
 * @dest: destination of copied string
 * Description: as above
 * Return: dest
 */

char *string_copy(char *dest, char *src)
{
int n = 0;
while (src[n] != '\0')
{
dest[n] = src[n];
n++;
}
dest[n] = '\0';
return (dest);
}

/**
 * new_dog - creates a brand new doggo
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Description: as above
 *
 * Return: pointer to the data structure of the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_p;
char *owner_p;

d = malloc(sizeof(dog_t));
if (d ==  NULL)
return (NULL);
name_p = malloc(string_length(name) + 1);
if (name_p == NULL)
{
free(d);
return (NULL);
}
string_copy(name_p, name);
owner_p = malloc(string_length(owner) + 1);
if (owner_p == NULL)
{
free(name_p);
free(d);
return (NULL);
}
string_copy(owner_p, owner);
d->name = name_p;
d->age = age;
d->owner = owner_p;
return (d);
}
