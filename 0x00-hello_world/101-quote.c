#include <unistd.h>
/**
 * main - Printing to the standard error
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and the piece of art is useful\"-Dora korpar, 2015-10-19\n", 59);
	return (1);
}
