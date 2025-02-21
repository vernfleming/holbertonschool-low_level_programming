#include <stdio.h>

/**
* main - Entry point to program
*
* Return: Exit code from program
*/

int main(void)
{
char digits;
for (digits = '0'; digits <= '9'; digits++)
{
putchar(digits);
}
putchar('\n');
return (0);
}
