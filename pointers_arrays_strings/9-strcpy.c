#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: sytring
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *test = dest;
while ((*dest++ = *src++))
;
 return (test);
}
