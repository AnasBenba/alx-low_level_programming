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
	int j = 0;

	while (str[i])
	{
		putchar(tolower(str[i]));
		i++;
	}
	while (str[j])
	{
		putchar(toupper(str[j]));
		j++;
	}
	putchar('\n');
	return (0);
}

