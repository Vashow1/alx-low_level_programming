#include "main.h"

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

	return(divisible(num, divisor + 1));
}