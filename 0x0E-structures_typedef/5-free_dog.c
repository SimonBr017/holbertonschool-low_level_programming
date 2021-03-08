#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free dog
 *@d: pointer to struct dog
 *Return: returns nothing void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
