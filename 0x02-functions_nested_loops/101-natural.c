#include <stdio.h>
/**
 * main - would have been
 * Return: 0
 */
int main(void)
{
int i, sum;
for (i = 0; 1 < 1024; i++)
{
if ((i % 3) == 0 || ((i % 5) == 0))
{
sum = sum + i;
}
printf("%d\n", sum);
return(0);
}

