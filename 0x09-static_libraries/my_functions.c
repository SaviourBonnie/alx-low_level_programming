#include "main.h"
#include <unistd.h>

/* Function to print a character */
int _putchar(char c) {
	return write(1, &c, 1);
}

/* Function to check if a character is lowercase */
int _islower(int c) {
	return (c >= 'a' && c <= 'z');
}

/* Function to check if a character is alphabetic */
int _isalpha(int c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* Function to compute the absolute value of an integer */
int _abs(int n) {
	return (n < 0) ? -n : n;
}

/* Function to check if a character is uppercase */
int _isupper(int c) {
	return (c >= 'A' && c <= 'Z');
}

/* Function to check if a character is a digit */
int _isdigit(int c) {
	return (c >= '0' && c <= '9');
}

/* Function to calculate the length of a string */
int _strlen(char *s) {
	int len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}

/* Function to print a string */
void _puts(char *s) {
	write(1, s, _strlen(s)); 
}

/* Function to copy a string */
char *_strcpy(char *dest, char *src) {
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

/* Implement the remaining functions in a similar manner... */
