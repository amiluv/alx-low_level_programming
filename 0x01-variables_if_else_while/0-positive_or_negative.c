#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigning a random number to n everytime
 * and print
 * Return: (0) success
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is negative\n", n);
	return (0);
}
	
