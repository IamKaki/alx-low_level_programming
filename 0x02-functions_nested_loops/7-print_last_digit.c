#include "main.h"

/**
 * print_last_digit - this prints the last digit of any number
 * @a: function parameter
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
