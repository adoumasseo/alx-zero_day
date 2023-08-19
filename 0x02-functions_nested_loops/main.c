#include "main.h"

int main(void)
{
	int g = 45;
	int s = -25;
	int sr;

	print_sign(g);
	_putchar(10);
	sr = print_sign(s);
	_putchar(10);
	printf("%d", sr);
	return (0);
}
