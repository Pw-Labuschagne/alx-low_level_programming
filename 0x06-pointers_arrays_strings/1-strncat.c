#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: byte determinator
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (dest[a] != '\0')
{
a++
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}
