#include <stdio.h>
#include "main.h"
/*
 * int print_last_digit: prints last digit
 *
 * Description: this function prints the last digit of a number
 *
 * Return: Returns 0 (Success)
 */
int print_last_digit(int n)
{
    int last_digit = abs(n % 10);

    _putchar(last_digit + '0');

    return (last_digit);
}

