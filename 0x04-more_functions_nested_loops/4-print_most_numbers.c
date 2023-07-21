#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4),
 *                      followed by a new line.
 */
void print_most_numbers(void)
{
    char *numbers = "01356789";
    int i = 0;

    while (numbers[i] != '\0')
    {
        _putchar(numbers[i]);
        i++;
    }
    _putchar('\n');
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
    print_most_numbers();
    return (0);
}

