#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: is the parameter that we gonna check
 *
 * Description: a function that checks for digit 0 through 9
 * Return: 1 if c is digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
