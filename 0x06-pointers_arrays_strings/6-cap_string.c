#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String
 * Return: 0
 */
char *cap_string(char *str)
{
char s[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int i = 0;
while (str[i] != '\0')
{
if (str[i] <= 122 && str[i] >= 97)
{
str[i] = str[i] - 32;
}
if (str[i] == s[i])
{
if (str[i + 1] <= 122 && str[i + 1] >= 97)
{
str[i + 1] = str[i + 1] - 32;
}
}
i++;
}
return (str);
}
