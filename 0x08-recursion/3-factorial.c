#include "main.h"

/**
 * factorial - return the factorial of a given nunber
 * @n: integer arams
 *
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
