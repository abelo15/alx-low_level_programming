#include "main.h"

/**
 * _isdigit - check main
 * write a function that checks for a digit (0 through 9)
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */

int _isdigit(int c)
{
	char x = '0';
	int digit = 0;

	for (; x <= '9'; x++)
	{
		if (x == c)
			digit = 1;
	}
	return (digit);
}
