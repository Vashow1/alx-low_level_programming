#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (*a)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
	}
}