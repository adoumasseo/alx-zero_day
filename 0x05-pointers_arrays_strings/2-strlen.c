#include "main.h"

/**
 * _strlen -  a function that returns the length of a string.
 * @s: the string that will be check
 *
 * Description: a function that returns the length of a string.
 * Return: lenght of string s
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; *(s + i) != 0; i++)
	{
		len++;
	}
	return (len);
}
