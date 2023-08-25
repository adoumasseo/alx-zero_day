#include "main.h"

/**
 * main - entry point
 * Description: this function just gonna call largest_prime_factor()
 * Return: 0 as succes
 */

int main(void)
{
	largest_prime_factor();
	return (0);
}

/**
 * is_prime - gonna check if a number is prime
 * @n: is number who gonna be check
 *
 * Description: nothing special same as title description
 * Return: 0 if not prime and 1 if prime
 */

int is_prime(unsigned long int n)
{
	unsigned int i;

	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - gonna find largest prime factor of a long int
 * Description: nothing special same as title description
 * Return: Nothing it's void type function
 */

void largest_prime_factor(void)
{
	unsigned long int i, max;

	max = 0;
	for (i = 1; i * i <= 612852475143; i++)
	{
		if (612852475143 % i == 0 && is_prime(i))
			max = i;
	}
	if (max != 0)
		printf("%lu\n", max);
}
