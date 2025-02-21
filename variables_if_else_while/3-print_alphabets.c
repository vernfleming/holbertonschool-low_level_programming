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
putchar(current_letter);
}
for (current_letter = 'A'; current_letter <= 'Z'; current_letter++)
{
putchar(current_letter);
putchar('\n');
return (0);
}
