#include "main.h"

/**
 * _strchr - locates character in string
 *  @s: pointer
 *  @c: character
 *  return: s
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == '\0')
return (s);
return (0);
}
