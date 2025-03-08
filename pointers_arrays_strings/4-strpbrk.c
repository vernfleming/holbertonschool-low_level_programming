#include <stdio.h>
#include <string.h>

/* _strpbrk - locates the first occurence of any character from 'accept' in 's'
 * @s: the string to be searched
 * @accept: the set of characters to look for
 * 
 * Description: this function searches the string 's' for the first occurrence
 * of any character that exists in the string 'accept'. It returns a pointer to
 * the first matching character in 's'. If no match is found, it returns NULL.
 * 
 * Return: a pointer to the first occurrence of any character from 'accept'
 * or NULL if no match
 */

char *_strpbrk(char *s, char *accept) {
while (*s)
{
const char *a = accept;
while (*a)
{
if (*s == *a)
{
return (char *)s;
}
a++;
}
s++;
}
 return (NULL);
}
