#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data type that saves variables
 * @name: the dog description
 * @age: how old is the dog
 * @owner: legal guardian of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
