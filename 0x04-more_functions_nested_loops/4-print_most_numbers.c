#include "main.h"
/**
 * print_most_numbers(void) - check main
 * write a function that prints the numbers, from 0 to 9, followed by a new line.
 * do not print 2 and 4
 * you can only use _putchar twice in you code
 */

void print_most_numbers(void)
{
	int x = '0';

	for (;x <= '9'; x++)
	{
		if (x != '2' && x != '4')
			_putchar(x);
	}
	_putchar('\n');
}
