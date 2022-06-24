#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the multiplication, followed by a new line.
 * the two numbers and result of the multiplication are stored in an integer
 * @argc: variable containing number of arguments in command line
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", mul);

	return (0);
}