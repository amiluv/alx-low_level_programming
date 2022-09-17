#include "main.h"
/**
 * _isdigit - checking for a digit between 0 and 9
 * @c: is an input number
 *
 * Return: returns 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
