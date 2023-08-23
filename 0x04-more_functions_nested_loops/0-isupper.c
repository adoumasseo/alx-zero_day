#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: is the parameter that we gonna check
 *
 * Description: a function that checks for uppercase character.
 * Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
