#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* This program prints the alphabet in lowercase, followed by a new
*line
*/
int main(void)
{
    for(char letter = 'a'; letter <= 'z'; letter++)
        putchar(letter);
	    
	putchar('\n');
	return (0);
}
