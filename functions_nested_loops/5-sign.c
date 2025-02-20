/**
 * print_sign - checks the sign
 * @n: the int name
 *
 * Return: 1 positive 0 cero -1 negative
 */
#include "main.h"
#include <stdio.h>

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

	return (0);
}
