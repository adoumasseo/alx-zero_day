#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * Return: No return, it's void type function
 */

void print_numbers(void)
{
	int i = 48;

	for (; i <= 57; i++)
		_putchar(i);
	_putchar(10);
}
