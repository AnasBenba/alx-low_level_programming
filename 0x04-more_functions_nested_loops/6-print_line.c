#include "main.h"

/**
 * print_line -> function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	char a = '_';

	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			putchar(a);
			i++;
		}
	}
	putchar('\n');
}
