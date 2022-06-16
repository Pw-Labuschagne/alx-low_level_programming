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
int i, z;
i = 0;
while (c[i] != '\0')
{
z = 0;
while (z < 9)
{
if (a[z] == c[i])
{
c[i] = n[z];
}
z++;
}
i++;
}
return (c);
}
