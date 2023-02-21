#include "main.h"

/**
*print_alphabet_x10 -> print alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char j = a; i <= 'z'; j++)
		{
			_putchar(j);
		}
		if (j != 9)
		{
			_putchar('\n');
		}
	}
}
