#include "main.h"
/**
 * _abs - computes the absolute value of an interger.
 * @n: integer got from the main programme
 *
 * Return: 1 or 0 or -1 dependig on test value
 */
int _abs(int n);
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n += (2 * n);
		return (n);
	}
	else
	{
		return (0);
	}
}
