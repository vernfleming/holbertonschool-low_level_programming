#include "main.h"

/**
 * print_diagonal - should draw a diagonal line but we'll see
 * @n: the number of \ or lines
 */

void print_diagonal(int n)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
