#include <stdio.h>

/**
 * main - this prints all single digits numbers separeated by commas
 * Return: - 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{	putchar(i + '0');
		if (i != 9)
		{	putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
