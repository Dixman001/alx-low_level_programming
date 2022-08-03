#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 *
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p) (char);
	p = print_name;

	return;
}
