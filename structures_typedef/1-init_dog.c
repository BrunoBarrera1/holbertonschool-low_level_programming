#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct to initialize
 * @name: name of dog (string)
 * @age: age of the dog (float)
 * @owner: owner of dog (string)
 * Description: initializes function with provided values
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
