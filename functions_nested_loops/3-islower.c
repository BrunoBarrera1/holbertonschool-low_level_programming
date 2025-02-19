#include "main.h"

/**
 * _islower: checks for lowercase characters
 *
 * Description: this program checks for specified lowercase characters
 *
 * Return: returns 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
