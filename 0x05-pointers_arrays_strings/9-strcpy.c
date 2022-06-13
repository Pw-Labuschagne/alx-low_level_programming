#include "main.h"
/**
 * _strcpy - Pointing copied string to dest
 * @dest: Propably destination
 * @src: Probably source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int c;
for (c = 0; src[c] != '\0'; c++)
dest[c] = src[c];
dest[c] = '\0';
return (dest);
}
