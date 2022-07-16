#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be copied
 * Return: NULL if str = NULL or if insufficianet memory was available
 * a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	int index = 0;
	int len = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		copy[index] = str[index];
		index++;
	}
	copy[len] = '\0';

	return (copy);
}
