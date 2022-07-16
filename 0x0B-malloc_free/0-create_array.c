#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: the size of the array
 * @c: the specific char
 * Return: NULL if the size = 0
 * or the function fails and a pointer to the array
 */


char *create_array(unsigned int size, char c)
{
	char *characters = malloc(size * sizeof(char));
	unsigned int index = 0;

	if (size == 0 || characters == NULL)
	{
		return (NULL);
	}

	while (index < size)
	{
		characters[index] = c;
		index++;
	}
	return (characters);
}
