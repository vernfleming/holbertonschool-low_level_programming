#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name
 *
 * @name: the name string 
 * @f: function pointer to alter print name
 *
 * Description: print_name takes a name as an input
 *
 * Return: void
 */


void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
