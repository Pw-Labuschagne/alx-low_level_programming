#include <stdio.h>
/**
 * main - lame
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c != 'e' && c != 'z')
putchar(c);
}
putchar('\n');
return (0);
}
