#include "function_pointers.h"

/**
 * array_iterator - executes a function given 
 * as a parameter on each element of an array.
 *
 * @array: the array to iterate
 * @size: size of the array
 * @action: is a pointer to the function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index = 0;

	if (name == NULL || f == NULL)
	{
		return;
	}
	
	for (index = 0; index < size; index++)
	{
		action(*array);
		array++;
	}
}
