#include <stdio.h>

/**
 * main - entry point
 * @argc: num of command line arguments
 * @argv: array of command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("Num of arguments: %d\n", argc - 1);
	return (0);
}
