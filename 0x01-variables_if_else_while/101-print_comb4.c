#include <stdio.h>

/**
 * main - entry point 
 * Description: it's about printing all combinaison of three digits
 * Return: 0 as success
 */

int main(void)
{
	int a, b, c;
	
	for (a = 48; a <= 55; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
				
			}
			c = 48;
		}
		b = 48;
	}
	putchar(10);
	return (0);
}
