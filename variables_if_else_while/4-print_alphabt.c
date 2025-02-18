#include <stdio.h>

/**
 * main - entry point
 *
 * Description: spells the alphabet but without q and e
 *
 * Return: always returns 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}

	}

	putchar('\n');

		return (0);
}
