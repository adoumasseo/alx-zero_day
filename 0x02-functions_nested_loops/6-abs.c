#include "main.h"

/**
 * _abs - this function print an absolue value
 * @n: function gonna print absolute value of this function
 * Description: It's about print absolute value
 * Return: 0 as succes
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
