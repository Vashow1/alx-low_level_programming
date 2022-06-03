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
	char Mystr[] = "Last digit of";
	int test;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	test = n % 10;
	if (test > 5)
	{
		printf("%s %i is %i and is greater than 5\n", Mystr, n, test);
	}
	else if (test < 6 && test != 0)
	{
		printf("%s %i is %i and is less than 6 and not 0\n", Mystr, n, test);
	}
	else
	{
		printf("%s %i is %i and is \n", Mystr, n, test);
	}
	return (0);
}
