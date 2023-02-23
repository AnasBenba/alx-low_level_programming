#include "main.h"

/**
* print_triangle -> function that prints a triangle, followed by a new line
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	if (n > 0)
	{
		int i = 1;

		while (i <= n)
		{
			int j = 1;

			while (j <= (n-i))
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
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
