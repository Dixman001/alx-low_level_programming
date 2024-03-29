 #include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: arguments
 * @argv: arrays of pointer
 * Return: zero (0) success
 */

int main(int argc, *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes  < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf('\n');

	return (0);
