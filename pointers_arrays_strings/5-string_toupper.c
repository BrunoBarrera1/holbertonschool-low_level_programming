#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * @str: the string to be modified
 * Description: iterates trough string and converts all lowercase to uppercase
 * Return: a pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
