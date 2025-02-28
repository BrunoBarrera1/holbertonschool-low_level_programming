#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Description: Converts a string to an integer
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int found_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] == '+')
{
sign *= 1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
if (result > (INT_MAX / 10) ||
(result == (INT_MAX / 10) && (s[i] - '0') > (INT_MAX % 10)))
{
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}
result = result * 10 + (s[i] - '0');
found_digit = 1;
}
else if (found_digit)
{
break;
}
i++;
}

return (result *sign);
}

