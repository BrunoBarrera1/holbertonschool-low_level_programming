#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates mem for an array
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated mem or null if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	if (size != 0 && total_size / size != nmemb)
		return (NULL);

	ptr = malloc(total_size);
		if (ptr == NULL)
			return (NULL);
	memset(ptr, 0, total_size);

	return (ptr);
}
