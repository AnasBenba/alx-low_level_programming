#include "main.h"

/**
* _isalpha -> check for lowercase characters
* Return: return 1 and 0 depending on condition
* @c: character to check
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
