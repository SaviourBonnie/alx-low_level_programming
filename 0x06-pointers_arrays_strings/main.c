#include <stdio.h>
#include "main.h"

int main(void)
{
	int n1 = 98;
	int n2 = 402;
	int n3 = 1024;
	int n4 = 0;
	int n5 = -98;

	printf("Printing integers:\n");
	printf("%d -> ", n1);
	print_number(n1);
	printf("\n");

	printf("%d -> ", n2);
	print_number(n2);
	printf("\n");

	printf("%d -> ", n3);
	print_number(n3);
	printf("\n");

	printf("%d -> ", n4);
	print_number(n4);
	printf("\n");

	printf("%d -> ", n5);
	print_number(n5);
	printf("\n");

	return (0);
}
