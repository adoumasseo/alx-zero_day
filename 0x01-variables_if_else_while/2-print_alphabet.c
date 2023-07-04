#include <stdio.h>
/**
 * main - Entry point
 * description: print alphabet
 * Return: zero as succes
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar(10);
	return (0);
}
