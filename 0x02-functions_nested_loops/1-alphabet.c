#include "main.h"
/**
 * main - print alphabets in lowercase
 * followed by a new line
 *
 * Return: (0) sucess
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
