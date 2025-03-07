#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
int count =0;
int i, sum;
while (*s) {
sum = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
sum = 1;
break;
}
}
if (sum == 0)
{
break;
}
s++;
count++;
}
return (count);
}
