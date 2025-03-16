#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory for a dog structure
 * @d: pointer to dog t
 *
 * Description: releases memory allocated for dog t
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
