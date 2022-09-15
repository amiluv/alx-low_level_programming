#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: n is an integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
