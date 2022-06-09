int printstr(char sampleStr[], int sizeofString)
{
	int j = 0;
	sizeofString = sizeofString - 1;

	while (j < sizeofString)
	{
		putchar(sampleStr[j]);
		j++;
	}
	putchar('\n');
	return (0);
}
void print_alphabet()
{
	char alphabet = 'a';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
