#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments, including the program name
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int a = 0; 
	int b = 0; 
	int product = 0;

	if (argc < 3)
	{
	
		printf("Error\n");

		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		product = a * b;

		printf("%d\n", product);
	}

	return (0);
}
