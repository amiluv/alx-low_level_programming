#include "main.h"
/**
 * main - print _putchar followed by a new line
 *
 * Return: (0) success
 */
int main(void)
{
	char characters[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(characters[i]);
	}
	_putchar('\n');
	return (0);
}
