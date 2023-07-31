#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array).
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /* Elements of the main diagonal (top-left to bottom-right)*/
		sum2 += a[i * size + (size - 1 - i)]; /* Elements of the secondary diagonal (top-right to bottom-left)*/
	}

	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
