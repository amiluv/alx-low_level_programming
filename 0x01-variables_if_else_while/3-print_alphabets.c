#include <stdio.h>
/**
 * main - Print alphabets in upper and lowercase
 * and then create a new line
 *
 * Return: always (0)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
