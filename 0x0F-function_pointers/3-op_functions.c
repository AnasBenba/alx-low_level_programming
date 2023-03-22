#include "3-calc.h"
#include <stdio.h>

/**
* op_add - function that adds two integers
* @a: first integer
* @b: second integer
*
* Return: the sum of the two integers
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - function that subtracts two integers
* @a: first integer
* @b: second integer
*
* Return: the difference of the two integers
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - function that multiplies two integers
* @a: first integer
* @b: second integer
*
* Return: the product of the two integers
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - function that divides two integers
* @a: first integer
* @b: second integer
*
* Return: the result of the division of the two integers
* If @b is 0, the function terminates the program with status code 100
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - function that computes the modulus of two integers
* @a: first integer
* @b: second integer
*
* Return: the modulus of the two integers
* If @b is 0, the function terminates the program with status code 100
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
