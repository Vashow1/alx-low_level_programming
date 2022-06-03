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
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'q' || alphabet == 'e')
			alphabet++;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
