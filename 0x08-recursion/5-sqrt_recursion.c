#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of
 * a number using recursion.
 * @n: int
 * @val: squre root
 *
 * Return: int
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function to calculate the square root.
 * @n: The number to calculate the square root of.
 * @val: square root
 *
 * Return:  int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
