#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be squarerooted.
 *
 * Return: the natural square root of n and if impossible -1.
 */

int _sqrt_recursion(int n)
{
	int root = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (squareroot(n, root));
}

/**
 * squareroot - computes the natural squareroot of n
 * @n: the number to be squarerooted.
 * @root: the test case.
 *
 * Return: the natural squareroot and if impossible -1.
 */
int squareroot(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	if (root == n / 2)
	{
		return (-1);
	}
	return (squareroot(n, root + 1));
}
