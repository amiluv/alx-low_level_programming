#include <stdio.h>
/**
 * main - Printing alphabet in lowercase and giving new line
 *
 * Return: (0) success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
