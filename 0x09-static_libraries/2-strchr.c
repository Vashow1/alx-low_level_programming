#include "main.h"

/**
 * _strchr - Returns a pointer to
 * the first occurrence of the character c in the string s,
 * or NULL if the character is not found.
 * @s: The string to be searched for c.
 * @c: The character to be searched
 *
 * Return: s or null if the character is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
