#include "main.h"
/**
 * leet - encodes to 1337
 * @c: Character to read
 * Return: 0
 */
char *leet(char *c)
{
char a[] = "aAeEoOtTlL";
char n[] = "4433007711";
int i = 0, z = 0;
for (c[i] != '\0'; i++)
{
for (z < 9; z++)
{
if (a[z] == c[i])
{
c[i] = n[z];
}
}
}
return (c);
}
