#include <stdio.h>
/**
 * main - its something
 * Return: 0
 */
int main(void)
{
int i, a, b, sum;
a = 1;
b = 2;
sum = a + b;
printf("1, 2, ");
for (i = 4; i < 50; i++)
{
printf("%d, ", sum);
a = b;
b = sum;
sum = a + b;
}
return (0);
}
