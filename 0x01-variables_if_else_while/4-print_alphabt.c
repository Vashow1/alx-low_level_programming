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
	char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};
	int n = sizeof(alphabet);
	int i = 0;

	while (i < n)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
		{
			i++;
		}
		putchar(alphabet[i]);
		i++;
	}
	return (0);
}
