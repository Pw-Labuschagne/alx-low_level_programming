#include <stdio.h>
/**
 * main - its something
 * Return: 0
 */
int main(void)
{
unsigned long int i, a, b, sum;
a = 0;
b = 1;
sum = a + b;
for (i = 1; i <= 49; i++)
{
printf("%lu, ", sum);
a = b;
b = sum;
sum = a + b;
}
return (0);
}
