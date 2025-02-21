#include <stdio.h>

/**
* main - Entry point to program
*
* Return: Exit code from program
*/

int main(void)
{
int digits;
for (digits = 0; digits <= 9; digits++)
{
putchar(digits + '0');
if (digits != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return(0);
}
