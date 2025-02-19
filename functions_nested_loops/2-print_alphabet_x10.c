#include "main.h"
/**
 * print_alphabet_x10 - Print ten times the alphbet in lowercase
 * Return:0
 */

void print_alphabet_x10(void)
{
	int i;


	for (i = 1; i <= 10; i++)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

