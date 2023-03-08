#include "main.h"

/**
 * check_prime -> function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: number
 * @i: iterator
 * Return: 1 if its a prime number else 0
 */
int check_prime(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number -> prime number identifier
 * @n: number
 * Return: what function check prime returns
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
