#include "variadic_functions.h"

/**
* print_numbers - Prints a variable number of integers.
* @separator: The string to print between the integers.
* @n: The number of integers to print.
* @...: A variable number of integers to print.
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int num = 0, i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, unsigned int);
		if (i != n - 1 && separator != NULL)
		{
			printf("%d%s", num, separator);
		}
		else
		{
			printf("%d", num);
		}
	}
	printf("\n");
}
