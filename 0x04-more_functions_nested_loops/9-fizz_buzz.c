#include "main.h"
#include <stdio.h>

/**
* main -> function that prints the numbers from 1 to 100
*  But for multiples of 3 prints Fizz and for multiples of 5 prints Buzz
*  and for multiples of both 3 and 5 prints FizzBuzz
* Return: 0
*/
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", a);
		}
		a++;
	}
	return (0);
}
