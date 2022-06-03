#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether the number stored in
 * the variable n is positive or negative.
 *
 * Return: 0 after looping through successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%n: is positive", n);
	}
	else if (n < 0)
	{
		printf("%n: is negative", n);
	}
	else
	{
		printf("%n: is zero", n);
	}
	return (0);
}
