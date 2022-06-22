#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to be parsed
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (count + _strlen_recursion(s + 1));
}
