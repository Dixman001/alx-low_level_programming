#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument
 * @argv: arrays
 * Return: 0
 */
int main(int argc, *argv[])
{
	int a, b, ans;

	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		prints("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	get_op = argv[2];

	if (*get_op_func(argv[2]) == MULL || aargv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("error\n");
		exit(100);
	}

	res = ret_op_func(ret_op);
	ans = res(a, b);

	printf("%d\n", ans);
	return (0);
}
