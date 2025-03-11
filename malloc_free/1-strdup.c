#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * _strdup -  returns a pointer to a newly allocated space in memory
 * _strdup - Creates a duplicate of a given string in dynamically allocated memory.
 * @str: string to copy
 *
 * Return: copied string, null if insufficent memory
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
