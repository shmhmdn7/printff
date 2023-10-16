#include "main.h"

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
