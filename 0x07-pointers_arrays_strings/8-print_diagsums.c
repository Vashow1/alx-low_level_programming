#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: a square matrix of integers
 * @size: size of the matrix
 */


void print_diagsums(int *a, int size)
{
	int sumf = 0, sumr = 0, i = 0, j = 0;

	while (i < size)
	{
		sumf += a[i];
		a += size;
		i++;
	}

	a -= size;

	while (j < size)
	{
		sumr += a[j];
		a -= size;
		j++;
	}

	printf("%d, %d\n", sumf, sumr);
}
