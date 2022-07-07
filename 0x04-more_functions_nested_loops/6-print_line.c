#include "main.h"
/**
 * print_line - check main
 * write a function that draws a straight line in the terminal
 * where n is the number of theimes the character _ should be printed
 * the line should end with a /n
 * if n is 0 or less, the function should only print \n
 * Return: Always 0
*/

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
