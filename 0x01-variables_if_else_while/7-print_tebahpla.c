#include <stdio.h>

/**
 * main - print out alpahbet in reverse order
 * Return: - Always 0
 */

int main(void)
{
	char var;

	for (var = 'z'; var >= 'a'; var--)
		putchar(var);
	putchar('\n');

	return (0);
}
