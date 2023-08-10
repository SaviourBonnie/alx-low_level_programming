#include <stddef.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
		return NULL;

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return NULL;

	unsigned int i;
	for (i = 0; i < size; i++)
	{
	    	array[i] = c;
	}

	return (array);
}