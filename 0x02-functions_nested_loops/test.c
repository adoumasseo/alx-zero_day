#include <stdio.h>

int main(void)
{
	int i = 28 / 10;
	int j = 0;

	while(j < 10)
	{
		j++;
		printf("%d", j / 2);
	}
	putchar(10);
	printf("%d\n", i);

	return (0);
}

