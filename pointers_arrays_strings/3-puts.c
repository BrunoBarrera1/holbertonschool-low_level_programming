#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to a string
 * Description: prints a string to stdout.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
