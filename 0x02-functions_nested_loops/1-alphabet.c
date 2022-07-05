#include <stdio.h>
/*
 * main Entry point
 *
 * return zero Success
 */

int main(void)
{
	char a;
	a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
