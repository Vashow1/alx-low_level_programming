#include <stdio.h>

/**
 * main - prints the programme name, followed by a new line
 * @argc: variable containing number of arguments in command line
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int index;

	printf("%s\n", argv[0]);

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
