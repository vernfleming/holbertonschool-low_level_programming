#include "main.h"
#include <stdio.h>

/**
 * main - entry
 * @s: does something
 * @b: does something
 * @n: does something
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
