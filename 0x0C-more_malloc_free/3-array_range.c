#include "main.h"
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: numerical value of the initial element
 * @max: end of the array range
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *intRange;
	int size;
	int i;

	if(min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	intRange = (int *)malloc(sizeof(int) * size);
	if (intRange == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		intRange[i] = min++;
	}
	return (intRange);
}
