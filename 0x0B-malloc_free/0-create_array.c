#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with specific c.
 * @size: size of array
 * @c: initialized char
 * Return: Pointer of char or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
p = malloc(size);
if ((p == 0) || (size == 0))
{
return (0);
}
for (i = 0; i < size; i++)
{
*(p + i) = c;
}
*(p + i) = '\n';
return (p);
}
