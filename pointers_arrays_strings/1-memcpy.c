#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies memory 
 * @dest: pointer to destination array
 * @src: source of data
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (*dest);
}
