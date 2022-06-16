#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String
 * Return: 0
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 32 && str[i] <= 47)
{
str[i++] = str[i++] - 32;
}
i++;
}
return ();
}
