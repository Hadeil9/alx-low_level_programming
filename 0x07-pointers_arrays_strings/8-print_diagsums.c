#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The pointer to the 1D array representing the square matrix.
 * @size: The size of the square matrix (number of rows or columns).
 *
 * Description: This function takes a pointer to
 * a 1D array representing a square matrix
 * of integers and its size
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
