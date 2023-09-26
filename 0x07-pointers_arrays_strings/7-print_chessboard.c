#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: The 2D array representing the chessboard.
 *
 * Description: This function takes a 2D array representing the chessboard
 * and prints its contents to the console in the form of a chessboard.
 * Each element in the array represents a square on the chessboard.
 * The chessboard is assumed to be an 8x8 grid.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
