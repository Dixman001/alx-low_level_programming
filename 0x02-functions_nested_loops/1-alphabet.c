#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Print alphabet in lowcase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar (l);
	}
	putchar ('\n');

}
