#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = a;
	/* your code goes here */
	*(p + 5) = 98; /* Added line of code */

	/* Printing the modified value of a[2] */
	printf("a[2] = %d\n", a[2]);

	return (0);
}
