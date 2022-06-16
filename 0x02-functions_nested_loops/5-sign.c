#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: integer got from the main programme
 *
 * Return: 1 or 0 or -1 dependig on test value
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
