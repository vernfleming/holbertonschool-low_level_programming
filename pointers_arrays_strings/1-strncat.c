/**
 * _strncat - concat strings but no bytes
 * @dest: desired string
 * @src: starting string
 * @n: max bytes
 *
 * Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
