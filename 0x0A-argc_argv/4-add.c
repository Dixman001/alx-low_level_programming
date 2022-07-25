#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}

	i = atoi(argv[1]);

	j = atoi(argv[2]);

	res = i + j;

	if (!atoi(argv[i]))
	{
		printf("%s\n", "Error");

		return (1);
	}
	printf("%d\n", res);

	return (0);

}
