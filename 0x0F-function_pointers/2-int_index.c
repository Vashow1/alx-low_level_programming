 #include "function_pointers.h"

 /**
  * int index - searches for an interger
  *
  * @array: an array containing the integers
  * @size: the size of the array
  * @cmp: is a pointer to a comparison function
  * Return: the index of the first element
  * for which the cmp function does not return 0
  */
 int int_index(int *array, int size, int (*cmp)(int))
 {
	int index = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (index = 0; index < size; index++, array++)
	{
		if (cmp(*array))
		{
			return index;
		}
	}
	return (-1);
 }
