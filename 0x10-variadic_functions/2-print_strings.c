#include "variadic_functions.h"

/**
* print_strings - prints a variable number of strings
* @separator: the string to print between strings
* @n: the number of strings to print
* @...: a variable number of strings to print
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i, j;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");
	va_end(ap);
}
