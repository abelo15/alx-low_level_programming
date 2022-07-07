#include "main.h"
/**
 * more_mumbers - check main
 * write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 * you can only use _putchar three times in your code.
 */

void more_numbers(void)
{
	int x;
	int y;
	char word[20] = "01234567891011121314";
	
	for (x = 0; x < 10; x++)
	{	
		for (y = 0; y < 20; y++)
		{
			_putchar(word[y]);
		}
		_putchar('\n');
	}
}
