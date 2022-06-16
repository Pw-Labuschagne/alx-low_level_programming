#include "main.h"
/**
 * string_toupper - Changes string to uppercase letters
 * @str: Character to check
 * Return: 0
 */
char *string_toupper(char *str)
{
int c = 0;
while (str[c] != '\0')
{
if ((str[c] >= 97) && (str[c] <= 122))
{
str[c] = str[c] - 32;
}
c++;
}
return (str);
}
