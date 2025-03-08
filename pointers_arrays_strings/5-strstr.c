#include <stdio.h>

/**
 * _strstr - Locates the first occurrence of the substring 'needle' in the string 'haystack'
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: a pointer to the first occurrence of the substring in 'haystack' or NULL if not there
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
return(NULL);
}
