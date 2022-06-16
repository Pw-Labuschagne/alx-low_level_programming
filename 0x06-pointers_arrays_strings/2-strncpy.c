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
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
*dest = '\0';
return (dest);
}
