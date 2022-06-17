#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer determines the length of line
 *
 */
void print_line(int n)
{
	int sizing;

	if (n > 0)
	{
		for (sizing = 0; sizing < n; sizing++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
