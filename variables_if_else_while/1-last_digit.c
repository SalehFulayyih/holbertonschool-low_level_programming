#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 * Description: Get a random number and print the last digit
 * and if it is grater than 5 , is 0, or less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n;
	int lstd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lstd = n % 10;
	if (lstd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lstd);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lstd);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstd);
	return (0);
}
