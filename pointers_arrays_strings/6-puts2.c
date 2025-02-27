#include "main.h"

/**
 * puts2 - prints characters
 * @str: pointer to the tring to be printed
 * Description: prints every other character of a string
 * Return: returns 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
