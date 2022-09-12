#include <stdio.h>
/**
 * main - Print alphabets in lowercase except q and e
 * and followed by a new line
 *
 * Return: Always (0) sucess
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
