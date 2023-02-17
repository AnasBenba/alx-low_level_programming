#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str = 'z';

	while (str >= 'a')
	{
		putchar(str);
		str--;
	}
	putchar('\n');
	return (0);
}
