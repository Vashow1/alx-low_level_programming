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

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');

	return (last);
}
