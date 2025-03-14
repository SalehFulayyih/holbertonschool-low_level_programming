#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: character to check is a digit.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}

