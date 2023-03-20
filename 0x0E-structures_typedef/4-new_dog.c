#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @src: pointer to string
 * @dest: pointer to string
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (i < (len + 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 * _strlen -> function that returns the length of a string.
 * @s: pointer to a string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
/**
* new_dog -> creates a new dog
* @name: Pointer to dog's name string
* @age: dog's age
* @owner: pointer to dog owner's name string
* Return: new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;
	dog_t *new = malloc(sizeof(dog_t));

	if (!new || age < 0)
	{
		return (NULL);
	}
	new_name = malloc(_strlen(name)+1);
	if (!new_name)
	{
		return (NULL);
	}
	else
	{
		new_name = _strcpy(new_name, name);
		new->name = new_name;
	}
	new->age = age;
	new_owner = malloc(_strlen(owner)+1);
	if (!new_owner)
	{
		return (NULL);
	}
	else
	{
		new_owner = _strcpy(new_owner, owner);
		new->owner = new_owner;
	}
	return (new);
}
