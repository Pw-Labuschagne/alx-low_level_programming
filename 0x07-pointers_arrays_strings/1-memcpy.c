#include "main.h"
/**
 * _memcpy - copies from src to dest
 * @dest: end path of memory
 * @src: source bytes of memory
 * @n: number of bytes to copy
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
