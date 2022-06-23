#include "main.h"
/**
 * is_prime_number - checks whether a number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime and 0 if not.
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (divisible(n, divisor));
}

/**
 * divisible - checks if a number is divisible by the divisor
 * @num: the number to be checked
 * @divisor: self explanatory
 *
 * Return: 0 if number is divisible and 1 if not.
 */

int divisible(int num, int divisor)
{
	if (num % divisor == 0)
	{
		return (0);
	}
	if (divisor == num / 2)
	{
		return (1);
	}
	return (divisible(num, divisor + 1));
}
