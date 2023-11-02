#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]))
		{
			words[j] = copy_word(str + i);
			if (words[j] == NULL)
			{
				while (j > 0)
				{
					j--;
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			j++;
			while (!is_space(str[i]) && str[i] != '\0')
			{
				i++;
			}
		}
	}

	words[word_count] = NULL;

	return (words);
}
