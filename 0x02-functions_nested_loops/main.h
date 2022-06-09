int printstr(char sampleStr[], int sizeofString)
{
	int j = 0;

	while (j < sizeofString)
	{
		putchar(sampleStr[j]);
		j++;
	}
	putchar('\n');
	return (0);
}
