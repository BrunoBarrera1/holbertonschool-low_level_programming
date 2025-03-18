#include <stddef.h>
#include "main.h"

/**
 * array_iterator - executes function on each element of an array
 * @array: array of ints
 * @size: size of array
 * @action: pointer to function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
