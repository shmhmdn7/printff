#include "main.h"

/**
<<<<<<< HEAD
 * convert - converts numbers into strings
 * @n: number
 * @b: base
 * @l: lowercase
 * Return: string
 */

char *convert(unsigned long int n, int b, int l)
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
		*--p = x[n % b];
		n /= b;
	} while (n != 0);

	return (p);
}
=======
 * p_flag - turns on flag
 * @sp: character
 * @f: pointer
 * Return: 1
 */

int p_flag(char sp, flags_t *f)
{
	int j = 0;

	switch (sp)
	{
		case '+':
			f->plus = 1;
			j = 1;
			break;
		case ' ':
			f->space = 1;
			j = 1;
			break;
		case '#':
			f->hash = 1;
			j = 1;
			break;
		case '0':
			f->zero = 1;
			j = 1;
			break;
		case '-':
			f->minus = 1;
			j = 1;
			break;
	}
	return (j);
}

>>>>>>> 5982d8b81a5f44a3c06bf4c206d0a7af5b9bba20
