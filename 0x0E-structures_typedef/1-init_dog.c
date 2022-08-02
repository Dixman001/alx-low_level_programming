#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - entry point for variable struct dog
 * struct dog - a data type with variables
 * @d: a pointer to dog
 * @name: dog description
 * @age: how old is the dog
 * @owner: legel guardian of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	free (d);
}
