#include "main.h"

/**
 * _calloc -  allocates memory for an array of nmemb elements
 * of size bytes each.
 *
 * @nmemb: the number of elements in the array
 * @size: the size of each element in the array
 * Return: a pointer to the allocated memory.
 */



void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *actualMem;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	actualMem = memory;
	for (index = 0; index < (nmemb * size); index++)
	{
		actualMem[index] = '\0';
	}

	return (memory);
}
