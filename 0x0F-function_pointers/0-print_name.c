#include "function_pointers.h"

/**
* print_name -> prints a name using a function pointer
*
* @name: pointer to the name to be printed
* @f: pointer to the function that will print the name
*
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
