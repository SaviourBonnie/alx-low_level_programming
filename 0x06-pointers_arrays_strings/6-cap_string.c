#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @ch: The character to check.
 *
 * Return: 1 if the character is a separator, 0 otherwise.
 */
int is_separator(char ch)
{
	char separators[] = " \t\n,;.!?\"(){}";

	int i;
	for (i = 0; separators[i] != '\0'; i++)
	{
		if (ch == separators[i])
			return (1);
	}

	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
		}

		capitalize_next = is_separator(*ptr);

		ptr++;
	}

	return (str);
}
