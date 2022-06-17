#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: int to be printed.
 *
 * It is to be noted that recursion is in use here
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
