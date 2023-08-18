#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 * Description: a function that prints the alphabet, in lowercase.
 * Return: it's void , so don't return anything
 */

void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		int i = 97;

		for (; i <= 122; i++)
			putchar(i);
		putchar(10);
	}
}
