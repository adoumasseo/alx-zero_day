#include "main.h"

/**
 * print_triangle -  a function that prints a triangle.
 * @size: is the size of the triangle
 *
 * Description: prints a triangle, followed by a new line.
 * Return: Nothing it's void type function
 */

void print_triangle(int size)
{
	int i, j, h;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (h = 0; h <= i; h++)
				_putchar('#');
			_putchar(10);
		}
		_putchar(10);
	}
}
