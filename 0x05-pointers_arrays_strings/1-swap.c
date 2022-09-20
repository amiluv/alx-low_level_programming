#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: is an integer
 * @b: is another integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
