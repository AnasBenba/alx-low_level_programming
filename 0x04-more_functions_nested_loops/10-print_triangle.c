#include "main.h"

/**
* print_triangle -> function that prints a triangle, followed by a new line
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = (size - i);

			while (j > 1)
			{
				_putchar(' ');
				j--;
			}
			int e = 0;

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
