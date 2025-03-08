#include <stdio.h>

/**
 * _strstr - findss the first occurrence of 'needle' in 'haystack'
 * @haystack: the string to be searched
 * @needle: the substring to search for
 *
 * Return: a pointer first instance of 'haystack' or NULL
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack)
{
const char *h = haystack;
const char *n = needle;
while (*h && *n && (*h == *n))
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
