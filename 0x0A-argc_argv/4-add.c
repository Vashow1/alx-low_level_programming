#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: variable containing number of arguments in command line
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int index1, sum, index2;

	for (index1 = 1; index1 < argc; index1++)
	{
		for (index2 = 0; argv[index1][index2]; index1++)
		{
			if (argv[index1][index2] < '0' || argv[index1][index2] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
	sum += atoi(argv[index1]);
	}
	printf("%d\n", sum);
	return (0);
}
