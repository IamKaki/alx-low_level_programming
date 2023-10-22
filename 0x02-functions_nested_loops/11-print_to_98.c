#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this prints out natural numbers to 98
 * @n: this is a funtion parameter
 * Return: this returns 0 when successful
 */

void print_to_98(int n)
{
	int j;

	if (n >= 0 && n <= 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
				if (j != 98)
					printf(", ");
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
				if (j != 98)
					printf(", ");
		}
	}
	else if (n < 0)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
				if (j != 98)
					printf(", ");
		}
	}
	else if (n == 0)
		printf("%d", n);
	printf("\n");
}
