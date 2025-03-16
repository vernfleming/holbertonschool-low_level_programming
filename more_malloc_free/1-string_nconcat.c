#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats 2 strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * @n: the number of bytes beingtaken from s2
 * Description: as above
 * Return: a pointer to the allocated space in memory containing
 *         s1 followed by the first n bytes of s2, and null
 *         Returns NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i = 0;
unsigned int j;
char *concat_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
concat_str = malloc(sizeof(char) * (len1 + n + 1));
if (concat_str == NULL)
return (NULL);
while (s1[i])
{
concat_str[i] = s1[i];
i++;
}
for (j = 0; j < n; j++, i++)
{
concat_str[i] = s2[j];
}
concat_str[i] = '\0';
return (concat_str);
}
