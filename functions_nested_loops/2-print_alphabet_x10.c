#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case followed by new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
int i = 0;
char letter = 'a'; 
while (i < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
return;
}
