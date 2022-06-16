#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: String to convert
 * Return: str
 */
char *cap_string(char *str)
{
char s[] = {32, '\t', '\n', 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
int a, i = 0;
while (str[i] != '\0')
{
a = 0;
while (s[a] != '\0')
{
if (str[i] == s[a] && (str[i + 1] <= 122 && str[i + 1] >= 97))
{
str[i + 1] = str[i + 1] - 32;
}
a++;
}
i++;
}
return (str);
}
