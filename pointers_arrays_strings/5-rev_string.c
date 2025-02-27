#include "main.h"

/**
 * rev_string - reverses string
 * @s: pointer to the string to be reversed
 * Return: returns 0
 */
void rev_string(char *s)
{
	int lenght = 0;
	int i;
	char temp;

	while (s[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - 1 - i];
		s[lenght - 1 - i] = temp;
	}
}
