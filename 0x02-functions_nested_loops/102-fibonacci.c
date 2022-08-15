#include <stdio.h>
/**
 * main - its something
 * Return: 0
 */
int main(void)
{
unsigned int i, a, b, sum;
a = 0;
b = 1;
sum = a + b;
for (i = 3; i <= 50; i++)
{
printf("%d, ", sum);
a = b;
b = sum;
sum = a + b;
}
return (0);
}
