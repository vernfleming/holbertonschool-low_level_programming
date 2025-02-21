#include <stdio.h>

/**
* main - Entry point to program
*
* Return: Exit code from program
*/

int main(void)
{
int digitz;
char current_letter;

for (digitz = '0'; digitz <= '9'; digitz++)
{
putchar(digitz + 0);
}
for (current_letter = 'a'; current_letter <= 'f'; current_letter++)
{
putchar(current_letter);
}
putchar('\n');
return (0);
}
