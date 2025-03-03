#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets length of prefix substring
 *@s: string to be searched
 *@accept: the set of bytes to match
 *Return: num of bytes on initial s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
