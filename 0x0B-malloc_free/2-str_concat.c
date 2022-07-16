#include "main.h"

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
	int length = 0 ;
	int index = 0, index1 = 0, index2 = 0;
	char *combString;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (index = 0; s1[index]; index++)
	{
		length++;
	}
	for (index = 0; s2[index]; index++)
	{
		length++;
	}

	combString = malloc(sizeof(char) * length);
	if (combString == NULL)
	{
		return (NULL);
	}
	for (index1; s1[index1]; index1++)
	{
		combString[index1] =  s1[index1];
	}
	for (index2; s2[index2]; index2++)
	{
		combString[index1++] = s2[index2];
	}
	return (combString);
}
