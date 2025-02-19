#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Prints the alphabit in lowercase
 * and if it is positive, negative, or zero
 * Return: 0
 */

void prind_alphabet(void)
{
	char letter = 'a';

	while (lettr <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
