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
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}

