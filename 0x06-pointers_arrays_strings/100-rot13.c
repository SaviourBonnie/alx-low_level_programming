#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 algorithm.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	int i;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*ptr != '\0')
	{
		for (i = 0; input[i] != '\0'; i++)
		{
			if (*ptr == input[i])
			{
				*ptr = output[i];
				break;
			}
		}

		ptr++;
	}

	return (str);
}
