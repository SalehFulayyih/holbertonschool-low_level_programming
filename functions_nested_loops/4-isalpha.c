#include "main.h"
/**
 * _isalpha - checks if char is alpha or not
 * @c: the char to check
 * Return: 1 if c is alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
