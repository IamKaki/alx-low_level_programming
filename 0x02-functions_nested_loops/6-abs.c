#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: a or -a when successfull
 * @a: this is the function parameter
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
		return (a);

	return (0);
}
