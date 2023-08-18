#include "main.h"

/**
 * _islower - check character
 * @c: it's the character that's function going to check
 *
 * Description: a function that checks for lowercase character.
 * Return: 1 if c is lowercase
 * Return: 0 otherwise
 */
int main(void)
{
	int n = 50;
	int u = 66;
	int l = 98;
	int r = 137;

	printf("%d\n", _isaslpha(n))
}
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
