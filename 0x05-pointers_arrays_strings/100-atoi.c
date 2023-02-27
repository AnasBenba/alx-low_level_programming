#include "main.h"

/**
 * _atoi -> function that convert a string to an integer
 * Return: integer num
 * @s: pointer to string
 */
int _atoi(char *s)
{
	int sign = 1, i = 0, num = 0, j = 0;

	while (s[j])
	{
		if (s[j] == '-')
		{
			sign *= -1;
		}
		while (s[j] >= '0' && s[j] <= '9')
		{
			i = 1;
			num = (num * 10) + (s[j] - '0');
			j++;
		}
		if (i == 1)
		{
			break;
		}
		j++;
	}
	num *= sign;
	return (num);
}
