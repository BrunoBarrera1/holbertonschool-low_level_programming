#include <stdio.h>
#include <main.h>
/*
 * int print_last_digit: prints last digit
 *
 * Description: this function prints the last digit of a number
 *
 * Return: Returns 0 (Success)
 */
int print_last_digit(int n);
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0)
	last_digit = -last_digit;

putchar(last_digit = '0')

	return (last_digit);
}
