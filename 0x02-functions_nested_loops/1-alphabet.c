#include "main.h"
/**
 * print_alphabet - prints all the lower case letters
 *
 * return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');

