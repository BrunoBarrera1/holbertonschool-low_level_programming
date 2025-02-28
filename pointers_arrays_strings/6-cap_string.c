#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * This function iterates through the string and capitalizes
 * the first letter of each word. Word separators include space,
 * tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

/* Check if the first character is a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;

/* Iterate through the string */
while (str[i] != '\0')
{
/* Check for word separators */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{

if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
}
}
i++;
}

return (str);
}

