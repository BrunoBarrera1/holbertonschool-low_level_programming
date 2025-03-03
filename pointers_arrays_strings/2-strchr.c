#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character
 * @s: pointer to string to be searched
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c or null if character isnt found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
