#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leet_dict[] = "aAeEoOtTlL";
	char leet_code[] = "4433007711";
	int i;

	while (*ptr != '\0')
	{
		for (i = 0; leet_dict[i] != '\0'; i++)
		{
			if (*ptr == leet_dict[i])
			{
				*ptr = leet_code[i];
				break;
			}
		}

		ptr++;
	}

	return (str);
}
