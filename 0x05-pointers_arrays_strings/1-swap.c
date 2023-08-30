#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Description: a function swaps the values of two integers.
 * Return: nothing it's void type function
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
