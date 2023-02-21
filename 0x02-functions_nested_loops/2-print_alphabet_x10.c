#include "main.h"

/**
*print_alphabet_x10 -> print alphabet in lowercase 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		j = 'a';
		_putchar('\n');
		i++;
	}
}
