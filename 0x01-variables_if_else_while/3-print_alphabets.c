#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * main- Entry point
 * description: print lowercase and uppercase
 * return: always 0 (success)
 */
int (void)
{
	char low;

		for (low = 'a'; low <= 'z'; low++)
			putchar (low);
		for (low = 'A'; low <= 'Z'; low++)
			putchar (low);
		putchar ('\n');
	return (0);
}
