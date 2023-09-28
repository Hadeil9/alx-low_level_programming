#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to
 * the power of y using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if error occurs
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
