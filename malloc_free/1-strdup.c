#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: string to be duplicated
 *
 * Description: duplicates a string
 *
 * Return: Pointer to arr (0) or Empty string (NULL)
 */

char *_strdup(char *str)
{
char *s;
int i;
int length = 0;
if (str == NULL)
return (NULL);
while (str[length] != '\0')
{
length++;
}
length = length + 1;
s  = malloc(length *sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < length; i++)
s[i] = str[i];
return (s);
}
