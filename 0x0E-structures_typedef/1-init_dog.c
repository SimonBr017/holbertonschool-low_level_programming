#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 *@d: pointer to struct dog
 *@name: string of char
 *@age: float
 *@owner: string of char
 *Return: No returns void
 *Description: initialise a variable of type struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
