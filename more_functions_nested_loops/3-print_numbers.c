#include "main.h"

/**
* print_numbers - prints numbers
*/

void print_numbers(void)
{
char numbers[] = "0123456789\n";
int i = 0;
while (numbers[i] != '\0')
{
_putchar(numbers[i]);
i++;
}
}
