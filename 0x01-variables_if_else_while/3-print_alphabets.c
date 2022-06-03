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
	char upperAlphabet = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (upperAlphabet = 'A'; upperAlphabet <= 'Z'; upperAlphabet++)
		putchar(upperAlphabet);
	putchar('\n');
	return (0);
}
