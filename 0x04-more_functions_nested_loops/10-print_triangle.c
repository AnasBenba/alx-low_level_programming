#include "main.h"

/**
* print_triangle -> function that prints a triangle, followed by a new line
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j <= (size - i))
			{
				_putchar(' ');
				j++;
			}
			int e = 1;

			while (e <= i)
			{
				_putchar('#');
				e++;
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
