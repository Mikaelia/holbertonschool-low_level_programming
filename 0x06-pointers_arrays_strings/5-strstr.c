/**
  * _findlen -  finds length of string
  * @s: string to count
  *
  * Return: num bytes in string
  *
  */
int _findlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	;
	return (count);
}

/**
  * *_strstr -  locates a substring
  * @haystack: string to search
  * @needle: substring to search for
  *
  * Return: pointer to beginning of located substring
  *
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int length, count, i, j;

	length = _findlen(needle);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			count = 0;

			while (needle[j] != '\0')
			{
				if (haystack[i + j] == needle[j])
					count++;
				j++;
			}
			if (count == length)
			{
				haystack = &haystack[i];
				return (haystack);
			}
		}
	}
	return (0);
}
