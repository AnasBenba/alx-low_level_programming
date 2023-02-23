#include "main.h"
#include <stdio.h>

/**
 * main -> finds and prints the largest prime factor
 * Return: 0 
 */
int main(void)
{
	long int n = 612852475143;
	long int a = 2;

	while (n > 1)
	{
		if (n % a == 0)
		{
			n = n / a;
		}
		else
			a++;
	}
	printf("%ld\n", a);
	return (0);
}
