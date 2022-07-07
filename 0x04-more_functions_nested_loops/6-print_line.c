#include "main.h"
/**
 * print_line - check main
 * write a function that draws a straight line in the terminal
 * where n is the number of theimes the character _ should be printed
 * the line should end with a /n
 * if n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int x = 0;

	if(n > 0)
	{
		for(;x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('$');
	_putchar('\n');
}
