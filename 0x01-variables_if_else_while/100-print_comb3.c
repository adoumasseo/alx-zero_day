#include <stdio.h>

/**
 * main - entry point
 * Description: It's about print all combinasons of two singles digits
 * Return: 0 as succes
 */

int main(void)
{
	int a = 48;
	int b = 49;

	for (; a <= 56; a++)
	{
		for (; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		b = 49;
	}
	putchar(10);
	return (0);
}
