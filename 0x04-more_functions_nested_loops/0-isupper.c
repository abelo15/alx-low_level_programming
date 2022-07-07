#include "main.h"

/**
 * _isupper(int c) - check main
 * write a function that checks for uppercase character.
 * Reutns 1 if c is uppercase
 * return zero success
 */

int _isupper(int c)
{
	char a;
	int upper = 0;

	for(a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			upper = 1;
	}
	return (upper);
}
