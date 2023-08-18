#include "main.h"

/**
 * main - entry point
 * Return: 0 as success
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet(void) - a function that prints the alphabet, in lowercase, followed by a new line
 * Return: it's void , so don't return anything
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);
	putchar(10);
}
