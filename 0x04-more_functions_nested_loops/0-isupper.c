#include "main.h"
/**
 * _isupper - checking for uppercase characters
 * @c: c is an input character
 *
 * Return: returns 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	char i = 'A';
	int n = 0;

	for (; i <= 'Z'; i++)
	{
		if (c == i)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
