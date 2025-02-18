#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: Always returns 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
