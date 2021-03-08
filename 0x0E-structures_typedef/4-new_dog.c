#include "dog.h"
#include <stdlib.h>
/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}
	return (i);
}
/**
 * *_strcpy - copy the string pointed by src
 *@src: source to copy
 *@dest: char pointer
 *Return: the pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != 0 ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - fuction that creat a new dog
 *@name: string of char
 *@age: float
 *@owner: string of char
 *Return:
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n_dog;

	n_dog = malloc(sizeof(struct dog_t));
	if (dog_t == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	else
	{
		n_dog->name = _strcpy(n_dog->name, name);
	}

	n_dog->age = age;

	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	else
	{
		n_dog->owner = _strcpy(n_dog->owner, owner);
	}

	return (n_dog);
}
