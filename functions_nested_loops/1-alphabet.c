#include "main.h"

/**
 * print alphabet - prints alphabet in lower case followed by new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return;
}
