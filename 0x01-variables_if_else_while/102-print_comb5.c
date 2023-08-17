#include <stdio.h>
/**
 * main - entry point
 * Description: It's about printing all combinaison of two two digits
 * Return: 0 as success
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 56; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (b <= d)
					{
						if (a <= c)
						{
							
							putchar(a);
							putchar(b);
							putchar(' ');
							putchar(c);
							putchar(d);
							putchar(',');
						}
					}

				}
				d = 48;
			}
			c = 48;
		}
		b = 48;
	}
	return (0);
}
