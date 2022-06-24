#include <stdio.h>

/**
 * main - prints the programme name, followed by a new line
 * @argc: variable containing number of arguments in command line
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
