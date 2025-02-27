#include "main.h"

/**
 * puts_half - prints string
 * @str: pointer of the string to be printed
 * Description: prints the half of the string
 * Return: 0
 */
void puts_half(char *str)
{
	int lenght = 0;
	int start;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		start = lenght / 2;
	}
	else
	{
		start = (lenght + 1) / 2;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
