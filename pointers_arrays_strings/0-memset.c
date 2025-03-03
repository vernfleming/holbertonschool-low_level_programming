#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory
 * @s: does something
 * @b: does something
 * @n: does something
 * return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
