#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Prints struct dog
 * @d: address stored thats required
 * Return: nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if  (d-> name != NULL)
{
printf("Name: %s\n", d->name);
}
	else
{
	printf("Name: (nill)\n");
}
if (d->age != 0)
{
printf("Age: %.1f\n", d->age);
}
	else
{
	printf("Age: (nill)\n");
}
if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
	else
{
	printf("Owner: (nill)\n");
}
}
}
