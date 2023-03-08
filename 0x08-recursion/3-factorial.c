#include "main.h"

/**
 * factorial -> function that returns the factorial of a given numbe
 * @n: number to use
 * Return: returns the factorial of a given number
 * or -1 if the number is lower then 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
