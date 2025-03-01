#include "main.h"

/**
 * puts2 - prints half a string
 * @str: string
 */
void puts2(char *str)
{
while (*str)
{
_putchar(*str);
str++;
if (*str)
str++;
}
_putchar('\n');
}
