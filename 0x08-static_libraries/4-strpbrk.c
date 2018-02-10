/**
  * *_strpbrk -  searches a string for any of a set of bytes
  * @s: string to search for bytes in accept
  * @accept: charset to use in searching string
  *
  * Return: num bytes in segment of s which consist only of bytes from accept
  *
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
	}
	return (0);
}

