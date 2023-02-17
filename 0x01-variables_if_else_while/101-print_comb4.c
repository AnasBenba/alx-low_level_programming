#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, m;

	for (m = 0; m <= 8; m++)
	{
		for (i = m + 1; i <= 8; i++)
		{
			for (j = i + 1; j <= 9; j++)
			{
				putchar(m + '0');
				putchar(i + '0');
				putchar(j + '0');
				if (m != 8 || i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
