#include <stdio.h>

/**
* main - Entry point to program
*
* Return: Exit code from program
*/


int main(void)
{
int digitz;
for (digitz = 0; digitz <= 9; digitz++)
{
putchar(digitz + '0');
}
putchar('\n');
return(0);
}
  
