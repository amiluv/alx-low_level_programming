#include <stdio.h>
/**
 * main - Printing all single digit numbers of base 10
 * starting from 0 and followed by a new line
 *
 * Return: (0) success
 */
int main(void)
{
	char n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
