#include "main.h"

/**
 * _islower - is lowercase return 1 otherwise return 0
 * Return:0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
