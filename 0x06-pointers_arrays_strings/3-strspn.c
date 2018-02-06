/**
  * _strspn - gets the length of a prefix substring
  * @s: string to search for characters in accept
  * @accept: charset to use in searching string
  *
  * Return: num bytes in segment of s which consist only of bytes from accept
  *
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int matchcount;
	int bytecount;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			matchcount = 0;

			if (s[i] == accept[j])
			{
				matchcount++;
				break;
			}
		}

		if (matchcount == 0 && accept[j] == '\0')
		{
			bytecount = i;
			return (bytecount);
		}
	}
	return (i);
}

