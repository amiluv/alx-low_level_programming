#include<stdio.h>
/**
 * main - print all possible combinations of single digit numbers that
 * must be separated by commas, and printed in ascending order
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

