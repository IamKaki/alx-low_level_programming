#include "main.h"

/**
 * _isalpha - checks whether alphabet
 * @c: - this is used to check condition
 * Return: - 0 or 1
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
