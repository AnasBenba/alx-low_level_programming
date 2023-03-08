#include "main.h"

/**
 * _palindrome -> function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: pointer to string
 * @a: index at the end of a string
 * @b: index in the beginning of a string
 * Return:  returns 1 if palindrome else 0.
 */
int _palindrome(char *s, int a, int b)
{
	if (a <= b)
	{
		return (1);
	}
	if (s[a] != s[b])
	{
		return (0);
	}
	return (_palindrome(s, a - 1, b + 1));
}
/**
 * _length -> function that gives the length of a string
 * @s: pointer to string
 * Return: length of a string.
 */
int _length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _length(s + 1));
}
/**
 * is_palindrome -> palindrome identifier
 * @s: pointer to string
 * Return: what function _palindrome returns .
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (_palindrome(s, _length(s) - 1, 0));
}
