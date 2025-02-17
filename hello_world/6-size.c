#include <stdio.h>

/**
* sizeof - determines size of data type
* %zu - format specifier for sizeof result
* \n - newlines
* main - entry point of program
* return - value 1 is good, else bad
*/

int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
