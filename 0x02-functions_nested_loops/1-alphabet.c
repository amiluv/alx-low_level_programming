#include "main.h"
/**
 * alpha - print alphabets in lowercase
 * followed by a new line
 *
 * Return: void
 */
void alpha(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
