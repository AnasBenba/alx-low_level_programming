#include "main.h"

/**
*_islower -> check for lowercase characters
*
*int c -> function parameter
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (0);
}
