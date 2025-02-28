#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int i, j;
char leet_map[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leet_replace[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replace[j];
break;
}
}
}

return (str);
}

