#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: the pointer to be set to char.
 * @to: the value to be set to
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}