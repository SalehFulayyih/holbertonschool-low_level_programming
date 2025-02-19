#include "main.h"
/**
 * print_alphbet_x10 - Print ten times the alphbet in lowercase
 * Return:0
 */

print_alphbet_x10(void)
{
	char letter = 'a';
	int i;


	for (i = 1; i <= 10; i++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

