#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: destination string
 * @src: source string
 * @n: determinator of char to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, a = 0;
while (*src != '\0' && i < n)
{
dest[a] = src[a];
a++;
i++;
}
*dest = '\0';
return (dest);
}
