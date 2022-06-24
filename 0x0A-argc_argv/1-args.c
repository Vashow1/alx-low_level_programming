#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: variable containing number of arguments in command line
 * @argv: array of pointers to the arguments
 *
 * Return: 0 if successful.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc);

	return (0);
}
