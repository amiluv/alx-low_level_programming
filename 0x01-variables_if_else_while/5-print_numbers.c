#include <stdio.h>
/**
 * main - Printing all single digit numbers of base 10
 * starting from 0 and followed by a new line
 *
 * Return: (0) success
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
