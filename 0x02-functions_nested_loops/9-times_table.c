#include "main.h"
/**
 *
 *
 *
 *
 */
void times_table(void)
{
	int a, b, c;
	b = 9;

	for (a = 0; a <= 9; a++)
	{
		c = ((a * b) + 1);

		_putchar (c);
		_putchar (',');
		_putchar (' ');
	}
	_putchar ('\n');
}
