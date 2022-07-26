#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	int i, end;

	char *array;

	if (str == NULL)

		return (NULL);

	for (end = 0; end <= *str; end++)
	{

	}

	end += 1;

	array = malloc(sizeof(char *) * end);

	for (i = 0; i < end; i++)

		array[i] = str[i];

	if (array == NULL)

		return (NULL);

	return (array);
}
