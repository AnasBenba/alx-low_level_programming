#include "main.h"

/**
* jack_bauer -> gives the time
*/
void jack_bauer(void)
{
	int h1, h, m, s;

	for (h1 = 0; h1 <= 2; h1++)
	{
		for (h = 0; h <= 9; h++)
		{
			if ((h1 <= 1 && h <= 9) || (h1 <= 2 && h <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (s = 0; s <= 9; s++)
					{
						_putchar('0' + h1);
						_putchar('0' + h);
						_putchar(58);
						_putchar('0' + m);
						_putchar('0' + s);
						_putchar('\n');
					}
				}
			}
		}
	}
}
