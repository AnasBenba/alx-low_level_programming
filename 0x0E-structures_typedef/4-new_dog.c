#include "dog.h"
#include <stdlib.h>

/**
* new_dog -> creates a new dog
* @name: Pointer to dog's name string
* @age: dog's age
* @owner: pointer to dog owner's name string
* Return: new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
