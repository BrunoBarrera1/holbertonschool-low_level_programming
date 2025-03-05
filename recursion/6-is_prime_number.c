#include "main.h"
#include <stdio.h>

/**
 *is_prime_helper - function to check for the prime number
 *@n: the number to check
 *@i: divisor to test
 *Return: 1  if n is a prime, otherwise 0
 */

int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to check
 * Return: 1 if n is prime, 0 else
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n / 2));
}
