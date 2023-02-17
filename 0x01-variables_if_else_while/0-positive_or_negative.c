#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more header goes here. */


/**
 * main - Determines if a number is positive or negative or zero
 *
 * Return: (0) always - Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
