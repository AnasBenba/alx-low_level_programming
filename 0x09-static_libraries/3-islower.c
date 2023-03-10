#include "main.h"

/**
* _islower -> check for lowercase characters
* Return: return 1 and 0 depending on condition
* @c: character to check
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
