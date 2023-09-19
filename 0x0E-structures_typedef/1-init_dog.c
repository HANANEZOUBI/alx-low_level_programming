#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: the dog to init
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		strncpy(d->name, name, sizeof(d->name) - 1);
		d->name[sizeof(d->name) - 1] = '\0';

		d->age = age;

		strncpy(d->owner, owner, sizeof(d->owner) - 1);
		d->owner[sizeof(d->owner) - 1] = '\0';
	}

}
