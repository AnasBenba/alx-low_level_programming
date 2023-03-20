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
		printf("%c", '\0');
	}
	else
	{
		if (!d->name)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (!d->owner)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
