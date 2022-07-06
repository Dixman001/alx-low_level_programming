#include "main.h"
/**
 * times_table - Entry point
 * Description: Print the 9 times table
 * @a: input figure
 * @b: constant figure
 * @c: computation of figures
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
		_putchar ('\n');
	}

}
