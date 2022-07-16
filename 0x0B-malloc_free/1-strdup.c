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
	char *duplicate;

	for (index = 0; str[index]; index++)
	{
		len++;
	}

	duplicate = malloc(sizeof(char) * len);
	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
		index++;
	}
	duplicate[len] = '\0';

	return (duplicate);
}
