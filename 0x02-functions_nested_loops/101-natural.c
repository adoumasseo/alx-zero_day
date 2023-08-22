#include "main.h"

/**
 * sum_multiples - print the sum of all multiples of 3 or 5 below 1024
 * Description: print the sum of all multiples of 3 or 5 below 1024
 * Return: the sum
 */

int sum_multiples(void)
{
	int sum, i;

	sum = 0;
	i = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	return (sum);
}
