#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Description: a function that prints a square, followed by a new line.
 * Return: no return is void type function
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar(10);
	else
	{
		int i, j;

		i = 0;
		for (; i < size; i++)
		{
			for (; j < size; j++)
				_putchar(35);
			_putchar(10);
			j = 0;
		}
	}
}
