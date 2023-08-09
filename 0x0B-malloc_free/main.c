#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	unsigned int size = 10;
	char character = 'X';

	char *array = create_array(size, character);

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			printf("%c ", array[i]);
		}
		printf("\n");

		free(array); /* Don't forget to free the allocated memory*/
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}
