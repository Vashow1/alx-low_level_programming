#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
	}
}