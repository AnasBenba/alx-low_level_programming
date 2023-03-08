#include "main.h"

/**
 * _pow_recursion -> function that returns the value of x
 * raised to the power of y.
 * @x: number
 * @y: the power
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else if (y % 2 == 0)
	{
		int a = _pow_recursion(x, y / 2);

		return (a * a);
	}
	else
	{
		int a = _pow_recursion(x, (y - 1) / 2);

		return (x * a * a);
	}
}
