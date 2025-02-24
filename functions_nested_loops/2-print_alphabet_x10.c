#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet10 times  in lower case followed by new line
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
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
}
}

