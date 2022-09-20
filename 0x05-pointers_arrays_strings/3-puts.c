#inclide "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: a string
 * Returm: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
