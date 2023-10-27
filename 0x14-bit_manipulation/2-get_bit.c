#include "main.h"

/**
 * get_bit - gets the bit at index
 * @n: number to index
 * @index: bit to get
 *
 * Return: bit state or -1 on error
 */

int get_bit(unsigned lone int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
