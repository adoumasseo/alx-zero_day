#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: a function that prints 10 times the numbers, from 0 to 14
 * Return: no return is void type
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;
	for (; i <= 9; i++)
	{
		for (; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		j = 0;
		_putchar(10);
	}

}
