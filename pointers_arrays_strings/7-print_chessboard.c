#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: shows chesspieces on board in alpha form
 */

void print_chessboard(char (*a)[8])
{
int f, g;
for (f = 0; f < 8; f++)
{
for (g = 0; g < 8; g++)
{
putchar(a[f][g]);
}
putchar('\n');
}
}
