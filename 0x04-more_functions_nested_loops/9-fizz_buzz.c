#include "main.h"

/**
 * main - entry point
 * Description: it's gonna test if fizzbuzz work
 * Return: 0 as succes
 */
int main(void)
{
	fizzbuzz();
	return (0);
}

/**
 * fizzbuzz - print fizz or buzz
 * Description: print 1 to 100
 * Return: nothing it's void type function
 */

void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz ");
		else if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
