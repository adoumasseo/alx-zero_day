#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Description: function that prints the 9 times table
 * Return: it's void type function
 */

void times_table(void)
{
	int i, j, scale;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			scale = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar(scale + '0');
			if (scale < 10 && j != 0)
			{
				_putchar(' ');
				_putchar(scale + '0');
			}
			else if (scale >= 10)
			{
				_putchar('0' + scale / 10);
				_putchar('0' + scale % 10);
			}
		}
		_putchar(10);
	}
}
