#include <stdio.h>

/**
 * main - entry point
 * Description: it's about all digits of base 16
 * Return: 0 as success
 */
int main(void)
{
	int n = 49;
	int l = 97;

	for (; n <= 57; n++)
		putchar(n);
	for (; l <= 102; l++)
		putchar(l);
	return (0);
}
