#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         On failure, returns NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, total_length, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	total_length = len1 + len2 + 1; /* +1 for the null-terminator */

	concatenated = (char *)malloc(total_length * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}
