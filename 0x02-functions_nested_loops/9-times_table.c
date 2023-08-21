#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Description: function that prints the 9 times table
 * Return: it's void type function
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 9)
				printn(i * j);
			else
			{
				printn(i * j);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}

/**
 * printn - Print two digit number using _putchar
 * @n: this is two digit number to print and it's int type
 *
 * Description: printn print two digits number using _putchar function
 * Return: it's void type
 */

void printn(int n)
{
	if (n <= 9)
	{
		_putchar(' ');
		_putchar('0' + n);
	}
	else
	{
		_putchar('0' + (n - (n % 10)) / 10);
		_putchar('0' + (n % 10));
	}
}
