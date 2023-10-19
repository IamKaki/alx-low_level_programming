#include "main.h"

/**
 * _islower - checks if c is lowercase or uppercase
 * @c: - this is what we use here to check
 * Return:- 1 if successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
