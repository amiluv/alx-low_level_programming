#include <stdio.h>
/**
 * main - Print all base 16 numbers in lowercase
 * followed by a new line
 *
 * Return: (0) succeess
 */
int main(void)
{
	int n;
	char i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
