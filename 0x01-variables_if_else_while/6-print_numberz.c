#include <stdio.h>
/**
 * main - print single digits of base 10 begining from 0
 *
 * Return: always (0)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
