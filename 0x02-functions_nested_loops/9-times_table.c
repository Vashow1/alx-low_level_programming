#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * return: void
 */
void times_table(void)
{
	int n;
	int multiplier;
	int product;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			product = n * multiplier;

			if (product <= 9)
			{
				_putchar((product / 10) + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
