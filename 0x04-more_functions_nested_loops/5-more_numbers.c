#include "main.h"

/**
 * more_numbers -> function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int a = 0;

		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar(((a - a % 10) / 10) + '0');
			}
			_putchar((a % 10) + '0');
			a++;
		}
		i++;
		_putchar('\n');
	}
}
