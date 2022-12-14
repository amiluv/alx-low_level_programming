#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: pointer to character
 * @c: character parameters to find
 *
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
