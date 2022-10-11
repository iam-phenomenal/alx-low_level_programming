#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - Init a variable of type struct dog
 * @d: The dog to be init
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != null)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
