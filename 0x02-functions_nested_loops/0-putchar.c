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
	char printstr[] = "_putchar\n";
	int i = sizeof(printstr);
	int j = 0;

	while (j < i)
	{
		putchar(printstr[j]);
		j++;
	}
	return (0);
}
