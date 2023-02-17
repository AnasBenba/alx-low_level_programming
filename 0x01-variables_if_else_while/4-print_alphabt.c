#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		if (str != 'q' && str != 'e')
		{
			putchar(str);
		}
		str++;
	}
	putchar('\n');
	return (0);
}

