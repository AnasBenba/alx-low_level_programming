#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
* struct list - struct containing a character and a pointer to a function
* @c: character
* @f: pointer to function
* Description: This struct is used to associate a character with a function
*              that takes a variable argument list and prints out a value
*/
typedef struct list
{
	char c;
	void (*f)(va_list);
} op;

#endif
