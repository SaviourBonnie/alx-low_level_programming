#include <stddef.h>
#include <stdlib.h>
#include "main.h" /* Include the header file*/

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	{
		unsigned int i; /*Declare i in a separate block*/
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
