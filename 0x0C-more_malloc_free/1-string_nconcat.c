#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of the second string to conc
 * Return: pointer that point to a newly allocated space in memory,
 * which contains s1,
 * followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newString;
	unsigned int index, index1, lenString;

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
		lenString++;
	}
	lenString += n;
	newString = (char *)malloc(lenString + 1);
	
	if (newString == NULL)
	{
		return (NULL);
	}
	for (index = 0; s1[index]; index++)
	{
		newString[index] = s1[index];
	}
	for (index1 = 0; index1 < n; index1++) 
	{
		newString[index++] = s2[index1];
	}
	newString[index] = '\0';

	return (newString);
}
