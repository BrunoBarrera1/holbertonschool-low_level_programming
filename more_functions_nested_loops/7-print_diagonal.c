#include "main.h"

/**
 * print_diagonal - draws line
 * @n: number of the character
 *
 * Description: prints a diagonal line
 * Return: returns 0 (Success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}

}
