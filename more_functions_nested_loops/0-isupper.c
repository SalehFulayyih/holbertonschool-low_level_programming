#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks for uppercase character
 * @c: character to check isUpper.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
