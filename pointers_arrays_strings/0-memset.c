#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory
 * @s: pointer to block of memory that needs filling
 * @b: second parameter
 * @n: number of bytes
 * Return: s
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
