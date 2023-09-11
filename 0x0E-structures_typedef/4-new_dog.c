#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to struct of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned long int len1, len2;
	char *name_copy, *owner_copy;
	dog_t *new_poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	new_poppy = malloc(sizeof(dog_t));
	if (new_poppy == NULL)
		return (NULL);

	len1 = strlen(name);
	len1++;
	name_copy = malloc(sizeof(char) * len1);
	if (name_copy == NULL)
	{
		free(new_poppy);
		return (NULL);
	}
	while (len1--)
		(*name_copy++) = (*name);
	new_poppy->name = name_copy;

	len2 = strlen(owner);
	len2++;
	owner_copy = malloc(sizeof(char) * len2);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_poppy);
		return (NULL);
	}
	while (len2--)
		(*owner_copy++) = (*owner++);
	new_poppy->owner = owner_copy;
	new_poppy->age = age;

	return (new_poppy);
}
