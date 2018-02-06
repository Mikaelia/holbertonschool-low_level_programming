int _findlen(char *s)
{
	int length;
	length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return length;
}
