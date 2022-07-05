#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main - Entry point
 *
 * Description: Print lower alphabet in reverse
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
/* main.c*/
{

	char low;



	for (low = 'z'; low >= 'a'; low--)

		putchar (low);

	putchar ('\n');

	return (0);

}
