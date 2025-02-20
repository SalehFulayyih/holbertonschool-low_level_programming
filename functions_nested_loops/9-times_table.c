#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
* Return:nothin
*/

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0)
			{
				_putchar (',');
				_putchar(' ');
			}
			result = i * j;
			if (result <= 9)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
