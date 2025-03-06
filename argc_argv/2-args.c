#include <stdio.h>

/**
 * main - takes argv argc as parameters
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("Argument %d: %s\n", i, argv[i]);
	}

	return (0);
}
