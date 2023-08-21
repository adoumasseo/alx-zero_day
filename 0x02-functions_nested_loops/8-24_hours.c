#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Baue
 * Description: function that prints every minute of the day of Jack Baeur
 * Return: nothing is void function
 */

void jack_bauer(void)
{
	int a, b, c, d, e;

	e = 0;
	for (a = 48; a <= 50; a++)
	{
		e++;
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (e == 3 && b > 51)
					{
						break;
					}
					else
					{
						_putchar(a);
						_putchar(b);
						_putchar(':');
						_putchar(c);
						_putchar(d);
						_putchar(10);
					}
				}
				d = 48;
			}
			c = 48;
		}
		b = 48;
	}
}
