#include "main.h"


int get_endianness(void)
{
	unsigned int n = 0x76543210;

	char *ptr = (char *) &n;

	if (*ptr == 0x10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
