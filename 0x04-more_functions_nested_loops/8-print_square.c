#include "main.h"

/**
 * print_square -> function that prints a square
 * @size: the size of the square
 */
void print_square(int size)
{
	char a = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
				_putchar(a);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
