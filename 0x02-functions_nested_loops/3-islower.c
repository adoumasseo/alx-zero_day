#include "main.h"

/**
 * _islower - check character
 * @c: it's the character that's function going to check
 *
 * Description: a function that checks for lowercase character.
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
