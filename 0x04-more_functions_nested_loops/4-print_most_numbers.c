#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9,bar 2 and 4
 *
 */
void print_most_numbers(void);
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
