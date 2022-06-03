#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints alphabet in lower case
 *
 * Return: 0 after looping through successfully
 */
int main(void)
{
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int n = sizeof(alphabet);
	int i = 0;

	while (i < n)
	{
		putchar(alphabet[i]);
		i++;
	}
	while (i < n)
	{
		putchar(toupper(alphabet[i]));
		i++;
	}
	return (0);
}
