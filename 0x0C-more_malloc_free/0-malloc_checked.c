#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: memory size to allocate
 * Return: pointer to the memory or 98 if failed.
 */
void *malloc_checked(unsigned int b)
{
	void *pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
