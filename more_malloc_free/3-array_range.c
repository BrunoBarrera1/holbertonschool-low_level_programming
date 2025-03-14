#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of ints
 * @min: The starting integer (inclusive)
 * @max: The ending integer (inclusive)
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr; /*pointer to array */
	int i, size;

	if (min > max)
	return (NULL);

	/*calculate num of elements in array*/
	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)/*check if malloc fails*/
	return (NULL);

	/* filling the array with values from min to max*/
	for (i = 0; i < size; i++)
	arr[i] = min + i;

	return (arr); /*return pointer to the array*/
}

