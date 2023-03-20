#include <stdio.h>
#include "dog.h"

/**
* print_dog -> Prints information about a dog
* @d: Pointer to a struct of type dog
*
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %s\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
