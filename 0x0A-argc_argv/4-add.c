#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point. Calculates the sum of arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 or 1 if its not digits.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		while (*arg)
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
