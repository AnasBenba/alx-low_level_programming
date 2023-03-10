#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 for success, 1 for failure
 */
int main(int argc, char *argv[])
{
	char *s = "Error";

	if (argc < 3)
	{
		int i = 0;

		while (s[i] != '\0')
		{
			putchar(s[i]);
			i++;
		}
		putchar('\n');
		return (1);
	}
	else
	{
		long int num = 1;
		int i;

		for (i = 1; i < argc; i++)
		{
			num *= atoi(argv[i]);
		}
		printf("%ld\n", num);
	}
	return (0);
}
