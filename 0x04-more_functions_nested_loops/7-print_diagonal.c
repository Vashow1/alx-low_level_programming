#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n : number of times the character \ should be printed
 *
 */
void print_diagonal(int n)
{
	int sizing;
	int spacing;

	if (n > 0)
	{
		for (sizing = 0; sizing < n; sizing++)
		{
			for (spacing = 0; spacing < sizing; spacing++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (sizing == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
