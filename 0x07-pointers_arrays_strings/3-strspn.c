#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the input string.
 * @accept: Pointer to the characters to be accepted.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (accept[j] == '\0') /* s[i] not found in accept, stop counting */
		{
			break;
		}
	}

	return (count);
}
