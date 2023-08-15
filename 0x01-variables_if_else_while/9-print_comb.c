#include <stdio.h>

/**
 * main - entry point
 * Description: it's about printing single digit with common
 * Return: 0 as succes
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
		if (i == 57)
			putchar(' ');
	}
	return (0);
}

