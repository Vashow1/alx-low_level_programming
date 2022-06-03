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
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
