#include <stddef.h>

/**
 * print_name - print a name using a callback function
 * @name: name to print
 * @f: pointer to function that takes pointer as argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
