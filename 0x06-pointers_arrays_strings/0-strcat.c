#include "main.h"
/**
 * strcat - Concatenate two strings
 * @src: Source code
 * @dest: Destination code
 * Return: Concated string
 */
char *_strcat(char *dest, char *src)
{
char cat1[] = "*src";
char cat2[] = "*dest";
char catd[100];

int a = 0, b = 0;

while (cat1[a] != '\0')
{
catd[b] = cat1[a];
a++;
b++;
}
a = 0;
while (cat2[a] != '\0')
{
catd[b] = cat2[a];
a++;
b++;
}
return (cat);
}

