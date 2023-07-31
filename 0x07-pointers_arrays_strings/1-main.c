#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
    	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0};
	char buffer2[98] = {0};

	printf("Original buffer:\n");
	print_buffer(buffer, 98);
	printf("Copy buffer2:\n");
	print_buffer(buffer2, 98);

	_memcpy(buffer2, buffer, 98);
	printf("-------------------------------------------------\n");
	printf("Original buffer:\n");
	print_buffer(buffer, 98);
	printf("Copy buffer2:\n");
	print_buffer(buffer2, 98);

	return (0);
}
