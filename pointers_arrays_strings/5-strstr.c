#include <stdio.h>

/**
 * _strstr - findss the first occurrence of the substr 'needle' in the string 'haystack'
 * @haystack: the string to be searched
 * @needle: the substring to search for
 *
 * Return: a pointer to first occurrence of the substr in 'haystack' or NULL
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (char *)haystack;
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
  return (char *)haystack;
haystack++;
}
return (haystack);
}
