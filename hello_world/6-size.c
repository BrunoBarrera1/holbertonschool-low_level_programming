#include <stdio.h>

/**
 * main - prints a text on screen
 * Description: prints message using printf
 * Return: returns 0
 */

int main(void)
{
printf("size of a char: 1 byte(s)\n", sizeof(char));
printf("size of an int: 4 byte(s)\n", sizeof(int));
printf("size of a long: 8 byte(s)\n", sizeof(long int));
printf("size of a long long: 8 byte(s)\n", sizeof(long long int));
printf("size of a float: 4 aaaaaaaaaaaaaaaaaaaaaaaaaabyte(s)\n", sizeof(float));
return (0);
}
