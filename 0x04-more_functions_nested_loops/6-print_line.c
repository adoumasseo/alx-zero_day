#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: it's number of times _ should be printed
 *
 * Description: a function that draws a straight line in the terminal.
 * Return: no return is void type function
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i = 0;

		for (; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
