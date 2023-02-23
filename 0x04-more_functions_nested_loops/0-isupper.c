#include "main.h"

/**
 * _isupper -> check if the character is uppercase
 * Return: 1 if uppercase or 0 if not
 * @c: character to check
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
}
