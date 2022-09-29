#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String to be searched for substring.
 * @accept: Substring of accepted chars.
 *
 * Return: frequency of occurrence.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, c, p = 0;

	while (s[i])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[i] == accept[c])
			{
				p++;
			}
		}
		if (p < i)
		{
			break;
		}
		i++;									}
	return (p);
}
