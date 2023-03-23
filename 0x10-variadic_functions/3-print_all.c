#include "variadic_functions.h"


void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

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
	while(format && format[i])
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
