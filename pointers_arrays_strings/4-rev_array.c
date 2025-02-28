#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse content of an array
 * @a: array of integers
 * @n: num of elements in array
 * Description: reverses content of array of integers,
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
