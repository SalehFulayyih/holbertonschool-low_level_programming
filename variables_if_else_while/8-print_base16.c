#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: This program prints all the numbers of base 16 in
 * lowercase
 * Return: 0
*/

int main(void)
{
	char num, ltr;

        for (num = '0'; num <= '9'; num++)
                putchar(num);
        for (ltr = 'a'; ltr <='f'; ltr++)
                putchar(ltr);
        putchar('\n');
        return (0);
}
