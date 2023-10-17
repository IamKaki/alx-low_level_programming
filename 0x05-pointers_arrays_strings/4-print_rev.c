#include "main.h"

/**
 * print_rev - print string in reverse & a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i, j, str;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	str = i;

	for (j = str - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
