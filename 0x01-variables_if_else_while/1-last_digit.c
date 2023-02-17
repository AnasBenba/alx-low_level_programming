#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last = n % 10;

	if (last > 5)
	{
		printf("last digit of %d is %d and is greater then 5", n, last);
	}
	else if (last_digit < 6 && last != 0)
	{
		printf("last digit of %d is %d and is less then 6 and not 0", n, last);
	}
	else
	{
		printf("last digit of %d is %d and is 0", n, last);
	}
	return (0);
}
