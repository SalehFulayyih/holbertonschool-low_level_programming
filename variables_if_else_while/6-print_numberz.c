#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: This program prints all single digit numbers of bas
 * 10 starting from 0 but not using char
 * Return: 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
