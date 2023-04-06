#include "main.h"

/**
 * _strlen -> function that returns the length of a string.
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen(const char *s)
{
	int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * _isdigit -> function that checks for a digit (0 through 9)
 * Return: 1 if digit or 0 if not
 * @c: number to check
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to a string containing the binary number.
 *
 * Return: The converted unsigned integer, or 0 if b is NULL or contains
 *         characters other than '0' and '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = _strlen(b), i = 0;
	unsigned int num = 0, n = 1;
	int j = len;

	if (len == 1)
	{
		if (b[i] == '1')
			return (1);
		else
			return (0);
	}
	while (len)
	{
		if (!_isdigit(bReturn: 1 on success, -1 on failure[i]))
		{
			return (0);
		}
		if (b[i] == '1')
		{
			while (j - 1)
			{
				n *= 2;
				j--;
			}
			num += n;
			len--;
			n = 1;
		}
		else
		{
			len--;
		}
		i++;
		j = len;
	}
	return (num);
}
