#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
/**
  *free_dog - a function that frees dogs
  *@d: pointer to dog struct
  *
  *Return: nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
