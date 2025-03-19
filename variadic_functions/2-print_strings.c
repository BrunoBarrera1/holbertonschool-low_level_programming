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
			printf("(nil)");
		else
			printf("%s", str);
	
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
