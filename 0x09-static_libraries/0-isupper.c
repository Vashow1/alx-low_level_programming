#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: takes character from main to be checked
 *
 * Return: 1 or 0 depending if char is upper or not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
