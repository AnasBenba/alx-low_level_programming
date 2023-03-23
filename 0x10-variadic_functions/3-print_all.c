#include "variadic_functions.h"

/**
* print_char - prints a character
* @list: list of arguments
* Return: void
*/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
* print_int - prints an integer
* @list: list of arguments
* Return: void
*/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
* print_float - prints a float
* @list: list of arguments
* Return: void
*/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
* print_string - prints a string
* @list: list of arguments
* Return: void
*/
void print_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
	{
		str = "(nil)";
	}

	printf("%s", str);
}
/**
* print_all - prints anything, followed by a new line
* @format: list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	int i, j;
	va_list list;
	char *sp = "";

	op form[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (form[j].c)
		{
			if (format[i] == form[j].c)
			{
				printf("%s", sp);
				form[j].f(list);
				sp = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
