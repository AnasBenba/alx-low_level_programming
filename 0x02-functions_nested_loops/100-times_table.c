#include "main.h"

/**
* print_times_table -> function that prints the n times table
* @n: n times tabel
*/
void print_times_table(int n)
{
	int i, j, c;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				c = i * j;
				_putchar(44);
				_putchar(32);
				if (c <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(c + 48);
				}
				else if (c <= 99)
				{
					_putchar(32);
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else
				{
					_putchar(((c / 100) % 10) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
