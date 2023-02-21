#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
