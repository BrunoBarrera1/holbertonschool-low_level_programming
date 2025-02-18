#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints alphabet in lowercase, then in uppercase.
 *
 * Return: always returns 0 (Succeass)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}

	putchar('\n');

		return (0);
}
