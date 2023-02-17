#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}
	putchar('\n');
	return (0);
}
