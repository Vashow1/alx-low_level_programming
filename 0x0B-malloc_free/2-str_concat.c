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
 * str_concat - concatenates two strings
 * 
 * @s1: the first string for concatenation
 * @s2: the second string for concatenation
 * Return: pointer that points to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	int index = 0, index2 = 0;
	char* combString;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	combString = malloc(sizeof(char) * (len1 + len2));
	if(combString == NULL)
	{
		return (NULL);
	}
	while(index < len1)
	{	
		combString[index] =  s1[index];
		index++;
	}
	while(index2 < len2)
	{
		combString[index] = s2[index2];
		index++;
		index2++;
	}
	return (combString);
}
