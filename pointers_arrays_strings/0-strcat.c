#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: desired string
 * @src: string
 *
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
