#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy of the string given as a parameter.
 * @str: Given string value
 * Return: Returns a pointer to dup string or NULL if no mem was available
 */
char *_strdup(char *str)
{
int i = 0, c;
char *s = malloc(str);
if (str == 0)
{
return (0);
}
for (c = 0; c < i; i++)
{
*(s + c) = *(str + c);
}
return (s);
}
