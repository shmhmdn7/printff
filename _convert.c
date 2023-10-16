#include "main.h"

/**
 * convert - converts numbers into strings
 * @s: number
 * @b: base
 * @l: lowercase
 * Return: string
 */

char *convert(unsigned long int s, int b, int l)
{
	static char *x;
	static char buffer[50];
	char *p;

	x = (l)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	do {
		*--p = x[s % b];
		s /= b;
	} while (s != 0);

	return (p);
}
