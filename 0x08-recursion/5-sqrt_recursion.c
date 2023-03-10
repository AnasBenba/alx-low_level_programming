#include "main.h"

/**
 * _sqrt - function that returns the natural square root of a number
 * @n: number
 * @i: square of the number
 * Return: if n dose have a natural square root returns i
 * else -1
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
/**
 * _sqrt_recursion -> square root
 * @n: number
 * Return: what function sqrt returns
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
