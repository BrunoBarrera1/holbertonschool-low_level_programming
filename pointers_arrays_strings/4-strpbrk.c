#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - searches a string for any set of bytes
 * @s: string to search
 *@accept: set of bytes to look
 *Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
