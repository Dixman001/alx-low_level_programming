#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name:");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
