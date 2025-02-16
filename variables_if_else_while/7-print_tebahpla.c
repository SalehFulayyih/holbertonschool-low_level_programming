#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: This program that prints the lowercase alphabet in reverse
 * Return: 0
*/

int main(void)
{
        char ltr;

        for (ltr = 'z'; ltr >= 'a'; ltr--)
		putchar(ltr);
	putchar('\n');
        return (0);
}
