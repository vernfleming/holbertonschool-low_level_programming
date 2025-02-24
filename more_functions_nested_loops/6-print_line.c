#include "main.h"

/**
 * print_line - does what it says */
 * @n: number of small lines
 */


void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
