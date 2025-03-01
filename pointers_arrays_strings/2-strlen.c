/**
 * _strlen - length of string
 * @s: string pointer
 *
 * Return: string length
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
