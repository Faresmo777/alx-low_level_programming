#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: integer input
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
