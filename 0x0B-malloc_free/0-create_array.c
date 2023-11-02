#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array and print its content
 * @size: size of the array to be created
 * @c: the charater to fill the array with
 */
char *create_array(unsigned int size, char c)
{
	int unsigned i;
	char *array;

	if (size == 0)
	{
	
		return (NULL);
	}

	array = ((char *)malloc(size * sizeof(char)));

	if (array == NULL)
	{
	
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	
		array[i] = c;
	}
	for (i = 0; i < size; i++)
	{
	
		_putchar(array[i]);
	}
	_putchar('\n');
	free(array);

	return (array);

	
}
