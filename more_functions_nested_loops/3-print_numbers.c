/**
 * print_numbers - numbers
 *
 * Descripsion: numbers from 0 to 9
 * Return: returns 0
 */
#include "main.h"
#include <unistd.h>

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
