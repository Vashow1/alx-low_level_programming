#include "main.h"
/**
 * more_numbers - prints 10x the numbers, from 0 to 9, followed by a new line.
 *
 */
void more_numbers(void)
{
	int digit;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (digit = 0; digit <= 9; digit++)
		{
			if (digit > 9)
			{
				_putchar((digit % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
