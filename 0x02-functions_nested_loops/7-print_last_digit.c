#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: we gonna print last digits of this number
 *
 * Description: function that prints the last digit of a number using %10
 * Return: return the last digit of number
 */

int print_last_digit(int n)
{
	if (n < 10)
	{
		_putchar(-1 * (n % 10) + '0');
		return (-1 * (n % 10));
	}
	else
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
