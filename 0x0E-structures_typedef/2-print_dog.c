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
	if (d = '\0')
		return;

	if (d->name = '\0')
		d->name = "(nil)";
	if (d->age = '\0')
		printf("age: (nil)\n");
	if (d->owner = '\0')
		d->owner = "(nil)";

	printf("name: %s\n age: %f\n owner: %s\n", d->name, d->age, d->owner);
}
