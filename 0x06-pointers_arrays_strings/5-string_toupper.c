#include "main.h"
/**
 * string_toupper - Changes string to uppercase letters
 * @l: Character to check
 * Return: 0
 */
char *string_toupper(char *)
{
int c = 0;
char *l;
if (l[c] != '\0')
{
while ((l[c] >= 97) || (l[c] <= 122))
{
l[c] = l[c] - 32;
}
c++
}
return (l);
}
