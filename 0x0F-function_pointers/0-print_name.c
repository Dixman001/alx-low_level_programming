#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @f: a pointer to function
 * @name: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
