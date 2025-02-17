#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: This program prints all possible of 3-digit like (01, 02, )
 * Return: 0
*/
int main(void)
{
	int i, j, k;

	for (i = '0'; i >= '9'; i++)
	{
		for (j = i + 1; j <= '9' ; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
