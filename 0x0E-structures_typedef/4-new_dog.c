#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *dog_t;

dog_t = malloc(sizeof(dog_t));
if (dog_t != NULL)
{
dog_t->name = name;
dog_t->owner = owner;
dog_t->age = age;
}
else
{
return (NULL);
}
return ((struct dog *)dog_t);
}
