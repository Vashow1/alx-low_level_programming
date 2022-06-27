#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9).
 * @c: takes int from main to be checked
 *
 * Return: 1 or 0 depending if int is a num or not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
