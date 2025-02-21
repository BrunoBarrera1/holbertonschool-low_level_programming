/**
 * print_to_98 - from n to 98
 *@n: numero
 *
 * Description: shows all numbers between n and 98
 * Return: returns 0
 */
#include <stdio.h>

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			if (n >= 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
			if (n <= 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}

}
