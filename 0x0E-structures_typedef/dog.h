#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct def
 *@name: string of char
 *@age: float
 *@owner: string of char
 *
 *Description: struct def dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
