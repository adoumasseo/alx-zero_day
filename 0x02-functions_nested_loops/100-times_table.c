#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: it's number that represent n int tables
 *
 * Description: function that prints the n times table starting by 0
 * Return: it's void type function
 */

void print_times_table(int n)
{
	int i, j, scale;

	if (n < 0 || n > 15)
		_putchar(10);
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
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
					_putchar(' ');
					_putchar(scale + '0');
				}
				else if (scale >= 10 && scale < 100)
				{
					_putchar(' ');
					_putchar('0' + scale / 10);
					_putchar('0' + scale % 10);
				}
				else if (scale >= 100)
				{
					_putchar('0' + scale / 100);
					_putchar('0' + ((scale -( scale % 10)) / 10) % 10);
					_putchar('0' + scale % 10);
				}
			}
			_putchar(10);
		}
	}
}
