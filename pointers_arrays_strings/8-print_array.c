#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array
 * @a: array of integers
 * @n: number of elements to be printed
 * Description: prints ellements of an array of integers commas etc in order
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
