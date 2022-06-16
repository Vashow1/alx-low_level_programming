#include "holberton.h"
int printstr(char sampleStr[], int sizeofString);
void print_alphabet();
#ifndef MAIN
#define MAIN

int printstr(char sampleStr[], int sizeofString)
{
	int j = 0;
	sizeofString = sizeofString - 1;

	while (j < sizeofString)
	{
		_putchar(sampleStr[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}

void print_alphabet()
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

#endif

