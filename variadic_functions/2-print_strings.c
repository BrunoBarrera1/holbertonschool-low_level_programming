#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_strings - print string
 * @separator: string to print between strings
 * @n: num of strings passed to function
 * Return: nothing void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			write(1, "(nil)", 5);
		else
		{
			
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
		}

		if (separator != NULL && i < n - 1)
		{
			while (*separator)
			{
				write(1, separator, 1);
				separator++;
			}
		}
	}

	va_end(args);

	write(1, "\n", 1);
}
