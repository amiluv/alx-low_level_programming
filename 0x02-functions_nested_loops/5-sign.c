#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: n is an integer
 *
 * Return: returns 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar(0);
		return (0);
}
