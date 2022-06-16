#include "main.h"
/**
 * _islower - checks whether inputted char is lowercase
 *
 * int c - character got from the main programme
 *
 * return: 1 or 0 dependig on test value
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
