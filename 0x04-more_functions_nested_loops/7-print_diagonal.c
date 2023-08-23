#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Description: a function that draws a diagonal line on the terminal.
 * Return: no return is void type function
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar(10);
	else
	{
		int i, j;

		i = 0;
		for (; i < n; i++)
		{
			if (i == 0)
				_putchar(92);
			else
			{
				j = 0;
				for (; j < i; j++)
				{
					_putchar(' ');
				}
				_putchar(92);
			}
			_putchar(10);
		}
	}
}
