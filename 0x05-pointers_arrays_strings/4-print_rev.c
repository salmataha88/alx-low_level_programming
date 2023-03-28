#include "main.h"

/**
 *  * print_rev - prints a string in reverse, followed by a new line
 *   * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, size;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	size = i;

	while (size--)
	{
		_putchar(s[size]);
	}

	_putchar('\n');
}
