#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: firs string
 * @s2: second string
 * Description: complex function its a lot of description
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j = 0;
	int len1, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	while (j < len2)
	{
		result[j] = s2[j];
		i++;
		j++;
	}

	return (result);
}
