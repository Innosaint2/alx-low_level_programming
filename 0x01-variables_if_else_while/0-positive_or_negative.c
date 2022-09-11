/* 
 * Program: Positive or Negative 
 * Auth: Onyebuenyi Innocent
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: Prints a random number and states whether it is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n>0)
		printf("Number is positive: %d.\n", n);
	else if (n<0)
		printf("Number is negative: %d.\n", n);
	else 
		printf("Number is zero: %d.\n", n);
	 
	return (0);
}
