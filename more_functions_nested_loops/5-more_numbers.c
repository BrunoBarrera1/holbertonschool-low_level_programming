#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Description: this function prints numbers from 1 to 14 ten times
 *
 * Return: returns 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
