#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return: This returns a 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
