#include <stdio.h>

/**
 * main - entry point
 * Description: It's about print all digits of decimal using putchar
 * Return: as succes main return 0
 */

int main(void)
{
	int a = 48;

	for (; a < 58; a++)
		putchar(a);
	putchar(10);
	return (0);
}
