#include "main.h"

/**
 * print_line - prints line
 *
 *@n: number of times the character _
 *
 * Description: draws a straight line in the terminal
 *
 * Return: returns 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
