#include "dog.h"
#include <stdlib.h>

/**
*init_dog - initializes a struct dog
*@d: pointer to struct dog
*@name: pointer to dog's name string
*@age: dog's age
*@owner: pointer to dog owner's name string
*Description: This function takes in a pointer to a struct dog and initializes
*its name, age, and owner fields using the provided arguments.
*Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL || age <= 0)
	{
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
