#include "main.h"
/**
 * _isalpha - checks whether inputted char is in the alphabet
 * @c: character got from the main programme
 *
 * Return: 1 or 0 dependig on test value
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
