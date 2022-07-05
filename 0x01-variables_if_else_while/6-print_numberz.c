#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit of base 10
 *              only use putchar
 *
 * Return: Always 0 (success)
 */

int main(void)

{

	int z;


	for (z = '0'; z <= '9'; z++)

		putchar (z);

	putchar ('\n');

	return (0);
}
