#include "main.h"

/**
 * print_square - function to print squares
 * @size : integer value
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; b < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
