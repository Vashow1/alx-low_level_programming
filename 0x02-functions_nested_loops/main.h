void printstr(char sampleStr[])
{
	int i = sizeof(sampleStr);
	int j = 0;

	while (j < i)
	{
		putchar(sampleStr[j]);
		j++;
	}
}
