#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, otherwise 1
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num < 25 && num >= 10)
			num -= 10;
		else if (num < 10 && num >= 5)
			num -= 5;
		else if (num < 5 && num >= 2)
			num -= 2;
		else
			num -= 1;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
