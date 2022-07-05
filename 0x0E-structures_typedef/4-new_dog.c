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
struct dog_t
{
char *name;
float age;
char *owner;
};

dog_t *new_dog(char *name, float age, char *owner)
{
struct dog_t *dog2;

dog2 = malloc(sizeof(struct dog_t));
if (dog2 == NULL)
	return(NULL);
dog2->name = name;
dog2->owner = owner;
dog2->age = age;
return (struct dog *)dog2;
}
