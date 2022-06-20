#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area,
 * pointed to by s with the constant byte b
 * @*s: memory area
 * @b: a constant with which the mem area will be filled
 * @n: the number of bytes to be filled after,
 * starting at the area pointed to by s
 *
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
