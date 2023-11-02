#include <stdlib.h>

/**
 * argstostr - Concatenate all program arguments with newlines
 * @ac: The argument count
 * @av: The argument vector (array of strings)
 *
 * Return: Pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++; /* for the newline character */
	}

	len++; /* for the null terminator */

	str = (char *)malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k++] = av[i][j];
			j++;
		}
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
