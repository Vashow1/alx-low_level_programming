#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

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
	int len = _strlen(str);
	char *duplicate = malloc(sizeof(char) * len);

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	while (index < len)
	{
		duplicate[index] = str[index];
		index++;
	}
	return (duplicate);
}
