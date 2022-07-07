#include "main.h"
/**
 * print_numbers(void) - check main
 * write a function that print the numbers, from 0 to 9, follwed by a new line
 * you can only use _putchar twice in you code
 */

void print_numbers(void)
{
	int x;

	for(x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
