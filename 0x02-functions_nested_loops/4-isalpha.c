#include "main.h"
/**
 * _isalpha - Check
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(void)
{
	char a;
	int x = 0;

	for (a = 'A'; a <= 'z'; a++)
	{
		if (a == 'C' || a == 'c')
			x = 1;
	}
	return (x);
}
