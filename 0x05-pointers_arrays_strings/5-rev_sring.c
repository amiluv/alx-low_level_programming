#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k;
	char f, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = j / 2;
	while (k >= 0)
	{
		f = s[j - k];
		l = s[k];
		s[k] = f;
		s[j - k] = l;
		k--;
	}
}
