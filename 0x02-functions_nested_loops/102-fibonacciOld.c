#include <stdio.h>

/**
 * fibonaci_50 - print first 50 fibonaci numbers
 * Description: same things as top
 * Return: return a value of one fibonaci number 
 */

int fibonaci_50(int m)
{
		unsigned int n = 0;
	
		if (n == 0)
		{
			return (0);
		}
		else if (n == 1)
		{
			printf("%d, ", n);
			return (1);
		}
		else
		{
			printf("%d, ", n);
			return (fibonaci_50(n - 1) + fibonaci_50(n - 2));
		}

}

/**
 * main - entry point
 * Description: This programs print the first 50 Fibonacci numbers
 * Return: 0 as succes
 */
int main(void)
{
	int i, j;

	j = 50;
	for (i = 0; i <= j; i++)
		fibonaci_50(i);
	return (0);
}
