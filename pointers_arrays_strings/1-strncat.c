#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: destinations
 * @src: source
 * @n: maximum n of bites used from src
 * Description: appends the src string to the dest string
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
