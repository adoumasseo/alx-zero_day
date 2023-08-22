#include <stdio.h>

/**
 * main - entry point
 * Description: It's about print 50 first fibonacci number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int f1, f2, nf;
	int i;

	f1 = 1;
	f2 = 1;
	i = 0;
	printf("%lu, %lu", f1, f2);
	for (; i <= 50; i++)
	{
		nf = f1 + f2;
		if (i < 50)
			printf(", ");
		printf("%lu", nf);
		f1 = f2;
		f2 = nf;
	}
	printf("\n");
	return (0);
}
