#include <stdio.h>
/**
 * main - it is here betty Ô.o
 * Return: 0
 */
int main(void)
{
int i, w, q;
for (i = '0' ; i <= '9' ; i++)
{
for (w = '0' ; w <= '9' ; w++)
{
for (q = '0' ; q <= '9' ; q++)
{
if (i < w && w < q)
{
putchar(i);
putchar(w);
putchar(q);
if (i != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
