#include <stdio.h>

/**
* main - Entry point to program
*
* Return: Exit code from program
*/

int main(void)
{
char current_letter;
for (current_letter = 'a'; current_letter <= 'z'; current_letter++)
{
if (current_letter == 'q' || current_letter == 'e')
{
continue;
}
putchar(current_letter);
}
putchar('\n');
return (0);
}
