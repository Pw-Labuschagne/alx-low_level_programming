#include <stdio.h>
/**
 * main - oh my
 * Return: 0
 */
int main(void)
{
int c;
int i;
for (c = '0' ; c <= '9' ; c++)
{
if (c < i)
{
putchar(c);
putchar(i);
if (c != '8' || (c == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
