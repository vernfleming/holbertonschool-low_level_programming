#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - locates the first occurence of any character from 'accept' in 's'
 * @s: the string to be searched
 * @accept: the set of characters to look for
 * Description: this function searches the string 's'
 * Return: a pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
while (*s)
{
const char *a = accept;
while (*a)
{
if (*s == *a)
{
return (char *) s;
}
a++;
}
s++;
}
return (NULL);
}
