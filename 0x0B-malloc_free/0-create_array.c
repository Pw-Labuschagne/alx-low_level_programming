#include "main.h"
#include <stdlib.h>
/**
 * create_array - reates an array of chars, and initializes it with a spec * ific char.
 * @size: size of array
 * @c: initialized char
 * Returns: Pointer of char or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
int *arr = malloc (sizeof (int) * size);
unsigned int i;
if (size == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return ('\n');
}
