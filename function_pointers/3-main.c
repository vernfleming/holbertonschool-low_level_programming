#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - starts and runs the calculator
 *
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Description: as above
 * Return: - Success (0) or a fail code
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operator)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
result = operator(num1, num2);
printf("%d\n", result);
return (0);
}
