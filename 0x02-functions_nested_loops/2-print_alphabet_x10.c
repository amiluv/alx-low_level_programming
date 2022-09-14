#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char i = 'a';

	while (n < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
