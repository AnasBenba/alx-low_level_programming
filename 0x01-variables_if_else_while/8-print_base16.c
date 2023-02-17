#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numhex;

	for (numhex = '0'; numhex <= '9'; numhex++)
	{
		putchar(numhex);
	}
	for (numhex = 'a'; numhex <= 'f'; numhex++)
	{
		putchar(numhex);
	}
	putchar('\n');
	return (0);
}
