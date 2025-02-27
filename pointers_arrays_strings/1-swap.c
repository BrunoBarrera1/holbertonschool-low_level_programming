#include "main.h"

/**
 * swap_int - swaps values
 * @a: fst int
 * @b: scnd int
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
