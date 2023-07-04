#include <stdio.h>
/**
 * main - Entry point
 * description: print alphabet in lowercase and uppercase
 * Return: zero as sucess
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar(10)
}
