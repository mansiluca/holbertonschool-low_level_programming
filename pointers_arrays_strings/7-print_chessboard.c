#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: the pointer to the 2D array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (a[i][j] != '\0')
	{
		_putchar(a[i][j]);
		j++;
		if (j == 8)
		{
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	_putchar('\n');
}
