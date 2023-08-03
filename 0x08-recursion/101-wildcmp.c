#include "main.h"

/**
 * wildcmp - Compares two strings andentical,
 * otherwise returns 0.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered i 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*') /* If the second string starts with */
	{
		if (*(s2 + 1) == '*') /* If the second string has more * consecutively */
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (*(s2 + 1) == '\0') /* If the second string ends with */
		{
			return (1);
		}
		else if (*s1 == '\0') /* If the first string ends but the second*/
		{
			return (0);
		}
		else /* Recursively check the firste current * string. */
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}

	if (*s1 == *s2) /* If the characters match, continue chec. */
	{
		if (*s1 == '\0') /* If both strings reach the end, they match. */
		{
			return (1);
		}
		else /* Recursively check the next characters. */
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}

	return (0); /* Characters don't match, return 0. */
}
