#include "main.h"

/**
 * print_last_digit - print last digit
 * @i: the int take out exept last digit
 * Return:tha value of the last digit
 */
int print_last_digit(int i)
{
	int lst = i % 10;
	_printchar(lst);


	return (lst+ '0');
}
