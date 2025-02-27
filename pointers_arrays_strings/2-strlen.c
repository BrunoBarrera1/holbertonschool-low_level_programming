#include "main.h"

/**
 * _strlen - length of a string
 * @s: character
 * Description: shows the length of a string
 * Return: returns 1
 */
int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c += 1;
	}
	return (c);
}
