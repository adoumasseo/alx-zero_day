#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: it's integer where we gonna start
 *
 * Description:  a function that prints all natural numbers from n to 98
 *Return: Nothing it's about void type function
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n != 98)
				printf("%d, ", n);
			n--;
		}
	}
}
