#include <stdio.h>

/**
 * main - print using putchar but no variable of type char
 * Return: - Always 0
 */

int main(void)
{
	int var;

	for (var = 0; var <= 9; var++)
		putchar (var + 48);
	putchar ('\n');

	return (0);
}
