#include <stdio.h>
/**
 * main - The best one so far
 * Return: 0
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (((x % 3) == 0) && ((x % 5) == 0))
{
printf("FizzBuzz ");
}
else if (((x % 3) == 0) || ((x % 5) == 0))
{
if ((x % 3) == 0)
{
printf("Fizz ");
}
if ((x % 5) == 0)
{
printf("Buzz ");
}
}
printf("%d ", x);
}
return (0);
}
