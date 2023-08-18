#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: It's about printing the largest int between trois choice
 * Return: 0 as success
 */

int main(void)
{
	int a, b, c, largest;

	a = 975;
	b = -98;
	c = 0;

	largest = largest_number(a, b, c);

	printf("%d is largest number\n", largest);

	return (0);
}
