#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: number of bytes to be filled starting from ptr
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n ; i++)
{
*s = b;
}
return (s);
}
