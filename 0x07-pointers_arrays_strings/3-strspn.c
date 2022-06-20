#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment of s,
 * which consist only of bytes from accept
 * @s: string parsed to be worked on
 * @accept: values to be searched for
 *
 * Return: number of of occurences of accept values in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j] && s[i] != '\0')
			{
				count++;
			}
		}
	}

	return (count);
}
