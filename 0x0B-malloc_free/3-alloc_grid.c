#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return NULL;

	int **grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return NULL;

	int i, j;	/* Declare variables before C90-style for loop */

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* If memory allocation fails for a row, free previously allocated rows */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return NULL;
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0; /* Initialize each element to 0 */
		}
	}

	return grid;
}

int main()
{
	int width = 4;
	int height = 3;

	int **grid = alloc_grid(width, height);

	if (grid == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}

	/* Printing the allocated grid */
	int i, j; /* Declare variables before C90-style for loop */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			printf("%d ", grid[i][j]);
		}
		printf("\n");
	}

	/* Freeing the allocated memory */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);

	return 0;
}
