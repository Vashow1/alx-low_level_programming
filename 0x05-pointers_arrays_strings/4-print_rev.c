#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0;
	char tmp[] = *s;
	int index;

	len = sizeof(tmp);

	for (index = len - 1; index >= 0; index--)
	{
		_putchar(tmp[index]);
	}
	_putchar('\n');
}

