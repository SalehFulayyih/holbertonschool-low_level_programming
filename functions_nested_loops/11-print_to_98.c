#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 * Return : Noting
 */
void print_to_98(int n)
{
	int k;

	if (i == 98)
	{
		printf("98");
	}
	else if (i < 98)
	{
		for (k = n ; k <= 98 ; k++)
		{
			printf("%d", k);
			if (k < 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (k = n ; k >= 98 ; k--)
		{
			printf("%d", k);
			if (k > 98)
				printf(", ");

		}
	}
	printf("\n");
}

