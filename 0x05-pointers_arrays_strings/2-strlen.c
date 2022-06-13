#include "main.h"
/**
 * _strlen - counts the string size
 * @s: character placeholder
 * Return: 1
 */
int _strlen(char *s)
{
int i;
int sum;

for (i = 0; s[i]; i++)
{
if (s[i] != ' ')
sum ++;
}
return (sum);
}
