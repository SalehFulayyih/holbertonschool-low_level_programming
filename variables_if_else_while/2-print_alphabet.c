#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * This program prints the alphabet in lowercase, followed by a new
 * line
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);    
	putchar('\n');
	return (0);
}
