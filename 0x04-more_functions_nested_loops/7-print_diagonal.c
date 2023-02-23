#include "main.h"

/**
* print_diagonal -> function that draws a diagonal line on the terminal
* @n: the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
