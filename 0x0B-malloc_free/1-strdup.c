#include <stddef.h>
#include <stdlib.h>
#include "main.h"

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *duplicate;
	unsigned int length = 0;

	/* Calculate the length of the input string*/
	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char)); /* +1 for null-terminator */
	if (duplicate == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= length; i++) /*Include null-terminator*/
		duplicate[i] = str[i];

	return (duplicate);
}
