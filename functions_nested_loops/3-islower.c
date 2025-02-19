/**
 * _islower - shows if c is lowercase
 * @c: parameter c
 *
 * Description: shows 1 if c is lowercase 0
 * Return: returns 0
 */
#include <stdio.h>
#include "main.h"
#include <ctype.h>

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

