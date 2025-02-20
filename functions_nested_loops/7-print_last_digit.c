#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: the int take out exept last digit
 * Return:tha value of the last digit
 */
int print_last_digit(int i)
{
	int lst = i % 10;

	if (lst < 0)
	{
		lst *= -1;
		_putchar(lst + '0');
	}
	return (lst);
}
