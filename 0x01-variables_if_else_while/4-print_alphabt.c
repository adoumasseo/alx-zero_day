#include <stdio.h>

/**
 * main - entry point
 * Description: it's about print alphabet in lowercase without e & q
 * Return: As succes main return 0
 */

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		if (c != 101 || c != 112)
			putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
