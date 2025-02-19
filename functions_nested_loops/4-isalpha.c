#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks the characters
 * @c: character
 *
 * Return: returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
