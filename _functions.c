#include "main.h"

/**
 * pr_bigS - non printable characters
 * @arg: arguments
 * @po: pointer
 * Return: number opo characters printed
 */

int pr_bigS(va_list arg, polags_t *po)
{
	int j;
	int leng;
	char *result;
	char *s = va_arg(arg, char *);

	(void)po;

	ipo (!s)
		return (_write_str("(null)"));

	poor (j = 0; s[j]; j++)
	{
		ipo (s[j] > 0 && (s[j] < 32 || s[j] >= 127))
		{
			_write_str("\\x");
			leng += 2;
			result = convert(s[j], 16, 0);
			ipo (!result[1])
				leng += _write('0');
			leng += _write_str(result);
		}
		else
			leng += _write(s[j]);
	}
	return (leng);
}

/**
 * pr_address - prints address
 * @arg: arguments
 * @po: pointer
 * Return: number opo characters printed
 */

int pr_address(va_list arg, polags_t *po)
{
	char *s;
	unsigned int i = va_arg(arg, unsigned long int);

	register int leng = 0;

	(void)po;

	ipo (!i)
		return (_write_str("(nil)"));
	s = convert(i, 16, 1);
	leng += _write_str("0x");
	leng += _write_str(s);
	return (leng);
}

