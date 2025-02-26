#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the '\' char is printed
 * Return : Nothing
 */
void print_diagonal(int n)
{
    
    int i, j;

	j = 0;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			putchar(' ');
			i--;
		}
		putchar('\\');
		putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
		putchar('\n');
}
