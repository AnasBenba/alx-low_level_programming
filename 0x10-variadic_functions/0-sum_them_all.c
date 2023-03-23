#include "variadic_functions.h"

/**
* sum_them_all -> Sums a variable number of integers.
* @n: The number of integers to sum.
* @...: A variable number of integers to sum.
* Return: The sum of the integers.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);

	return (sum);
}
