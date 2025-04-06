#include "lists.h"
#include <string.h>

/**
 * _strlen - calcs length of string
 * @s: pointer to string
 * Return: length of string
 */

unsigned int _strlen(const char *s)
{
unsigned int len = 0;
while (s[len] != '\0')
len++;
return (len);
}
