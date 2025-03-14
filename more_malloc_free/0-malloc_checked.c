#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc function
 * @b: num of bytes to allocate
 * Description: function that allocates memory and returns a pointer to it
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: no malloc for you\n");
		exit(98);
	}

	return (ptr);
}
