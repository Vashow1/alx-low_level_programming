#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (*a)
	{
		while (i < 8)
		{
			_putchar(a[i]);
			i++;
		}
		a++;
	}
}