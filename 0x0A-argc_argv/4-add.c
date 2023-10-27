#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of arguments, including the program name
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);

	return (0);
}

