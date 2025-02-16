#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: This program prints the alphabet in lowercase and
 * then in uppercase
 * Return: 0
*/

int main(void)
{
	char l_ltr, u_ltr;

	for (l_ltr = 'a'; l_ltr <= 'z'; l_ltr++)
		putchar(l_ltr);

	for (u_ltr = 'A'; u_ltr <= 'Z'; u_ltr++)
		putchar(u_ltr);
	putchar('\n');
	return (0);
}
