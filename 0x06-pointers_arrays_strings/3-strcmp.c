#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: Less than 0 if s1 is less than s2,
 *         0 if s1 is equal to s2,
 *         Greater than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	/* If one of the strings has ended, check if both are equal */
	if (*s1 == '\0' && *s2 == '\0')
		return 0;
	else if (*s1 == '\0')
		return -(*s2);
	else
		return *s1;
}
