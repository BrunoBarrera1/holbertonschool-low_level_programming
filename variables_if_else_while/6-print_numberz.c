#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints single digit numbers from base 10 starting from 0
 *
 * Return: always returns 0 (success)
 */
int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                putchar(i + '0');
        }
        putchar('\n');

                return (0);
}
