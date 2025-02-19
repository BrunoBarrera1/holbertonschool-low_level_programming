#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Description:Print the alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}

}
