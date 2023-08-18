#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet
 * Description: a function that prints the alphabet, in lowercase.
 * Return: it's void , so don't return anything
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		_putchar(i);
	_putchar(10);
}
