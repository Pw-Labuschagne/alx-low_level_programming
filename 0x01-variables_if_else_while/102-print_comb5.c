#include <stdio.h>
/**
 * main - getting tired of these things betty
 * Return: 0
 */
int main(void)
{
int a, b, c, d;
for (a = 0; c <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
for (c = 0; c <= 99; c++)
{
for (d = 0; d <= 99; d++)
{
if (((c + d) > (a + b) && c >= a) || a < c)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a + b + c + d == 227 && c == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
