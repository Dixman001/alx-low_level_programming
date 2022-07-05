#include <stdio.h>

/**
 * print_alphabet - Entry point
 * Description: Print alphabet in lowcase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar (low);
	}
		putchar ('\n');

	return (0);
}
