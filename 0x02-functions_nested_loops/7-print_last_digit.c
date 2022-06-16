#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer got from the main programme
 *
 * Return: 1 or 0 or -1 dependig on test value
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n *= -1;
	}
	last = n % 10;
	_putchar(last + '0');

	return (last);
}
