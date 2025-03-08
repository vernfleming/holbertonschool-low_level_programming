#include "main.h"

/**
 * _strspn - gets length of a prefix
 * @s: input string
 * @accept: the set of chars
 *
 * Return: 's' also in 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;
int sum = 0;

while (*s)
{
sum = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
sum = 1;
break;
}
}
if (!sum)
{
break;
}
s++;
count++;
}
return (count);
}
