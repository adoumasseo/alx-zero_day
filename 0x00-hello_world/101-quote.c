#include <stdio.h>

/**
 * main - entry point
 * description: this function print some string in stderr
 * Return: one as succes
 */
int main(void)
{
	char q[] = "Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "and that piece of art is useful\" - %s", q);
	return (1);
}
