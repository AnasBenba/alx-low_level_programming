#include "main.h"
#include <stdio.h>

/**
* print_to_98 -> prints number from n to 98
* @n: number to start
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
}
