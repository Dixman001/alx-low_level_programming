#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * return: always 0 (success)
 */
int main (void)
{
	char low, hi;

	for(low = 'a'; low <= 'z'; low++)
		putchar(low);
	for(hi = 'A'; hi <= 'Z'; hi++)
		putchar(hi);
	printf('\n');
	return(0);
}
