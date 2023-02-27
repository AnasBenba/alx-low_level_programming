#include "main.h"

/**
 * swap_int -> function that swaps the values of two integers
 * @a: a pointer to the first value
 * @b: b pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
