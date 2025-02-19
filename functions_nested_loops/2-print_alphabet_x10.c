/**
 * print_alphabet_x10 - entry point
 *
 * Description: prints alphabet 10 times in lowercase
 *
 * Return: returns 0
 */
#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int contador = 0;
	int i = 0;

	while (contador < 10)
	{
		i = 0;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		contador++;
		_putchar('\n');
	}
}
