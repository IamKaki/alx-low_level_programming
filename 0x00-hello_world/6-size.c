#include <stdio.h>

/**
 * main - program to determine size of int, float, double and char
 * Return:- this is to return 0
 */

int main(void)
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	printf("The size of int: %d\n", sizeof(integerType));
	printf("The size of char: %c\n", sizeof(charType));
	printf("The size of float: %d\n", sizeof(floatType));
	printf("The size of double: %d\n", sizeof(doubleType));

	return (0);
}
