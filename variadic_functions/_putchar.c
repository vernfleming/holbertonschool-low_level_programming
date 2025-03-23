#include <unistd.h>  // Required for 'write'

int _putchar(char c)
{
    return write(1, &c, 1);  // Output to standard output
}
