#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: this is the number that gonna be check
 *
 * Description: a function that prints the sign of a number
 * Return: 1 as positive value, 0 as 0 and -1 as neagtive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
