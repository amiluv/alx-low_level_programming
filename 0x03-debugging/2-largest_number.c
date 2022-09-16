#include "main.h"

/**
 * largest_number - print the largest of three integers
 * @a: integer1
 * @b: integer2
 * @c: integer3
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		laegest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
