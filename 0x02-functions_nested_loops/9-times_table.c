#include "main.h"
#include <math.h>

/**
 * times_table - prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, times;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			times = i * j;
			if (times <= 9)
				_putchar(' ');
			else
				_putchar((times / 10) + '0');
			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
