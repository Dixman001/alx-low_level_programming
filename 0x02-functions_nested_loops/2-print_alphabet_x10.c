#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: print the alphabet line x10
 * Return: Always o (success)
 */
void print_alphabet_x10(void)
{
	char l
	int x

	for (x = 0; x <= 10; x++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar (l);
	}
	putchar ('\n')
}
