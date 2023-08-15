#include <stdio.h>

/**
 * main - entry point
 * Description: it's about alphabet reverse
 * Return: 0 as succes
 */

int main(void)
{
	int a = 122;

	for (; a >= 97; a--)
		putchar(a);
	putchar(10);
	return (0);
}
