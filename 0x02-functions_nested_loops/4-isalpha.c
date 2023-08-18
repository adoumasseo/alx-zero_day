#include "main.h"

/**
 * _isalpha - check character
 * @c: it's the character that's function going to check
 *
 * Description: a function that checks for alphabetic character.
 * Return: 1 if c is alphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
