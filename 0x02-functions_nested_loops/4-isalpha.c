#include "main.h"
/**
 * _isalpha - check for alphabetic characters
 * @c: c is an ascii character
 *
 * Return: 1 for alphabets
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
