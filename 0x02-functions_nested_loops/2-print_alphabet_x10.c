#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case ten times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int j = 1;

	for (j = 1; j <= 10; j++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
