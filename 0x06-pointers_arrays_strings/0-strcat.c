#include "main.h"
/**
 * strcat - Concatenate two strings
 * @src: Source code
 * @dest: Destination code
 * Return: Concated string
 */
char *_strcat(char *dest, char *src)
{
int a = 0, b = 0;

while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}

