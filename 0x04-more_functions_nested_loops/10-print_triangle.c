#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: int which determines the size of the triangle
 *
 */
void print_triangle(int size)
{
	int base, index;

	if (size > 0)
	{
		for (base = 1; base <= size; base++)
		{
			for (index = size - base; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < base; index++)
			{
				_putchar('#');
			}
			if (base == size)
			{
				continue;
			}
		}
	}
	_putchar('\n');
}
