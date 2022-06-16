#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer got from the main programme
 *
 * Return: 1 or 0 or -1 dependig on test value
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		n %= 10;
		_putchar(n);
		return (n);
	}
	else if (n < 0)
	{
		n -= (2 * n);
		n %= 10;
		_putchar(n);
		return (n);
	}
	else
	{
		return (0);
	}
}
