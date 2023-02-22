#include <stdio.h>

/**
 * main -> Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Return: 0
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long i = 3;
	long next = a + b;

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%l \n", next);
		}
		else
		{
			printf("%l, ", next);
		}

		a = b;
		b = next;
		next = a + b;
		i++;
	}
	return (0);
}
