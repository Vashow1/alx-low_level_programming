#include "main.h"
/**
 * _strstr - function finds the first occurrence of
 * the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 * @haystack: the string to be operated on.
 * @needle: the string to be searched for.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (*needle == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
