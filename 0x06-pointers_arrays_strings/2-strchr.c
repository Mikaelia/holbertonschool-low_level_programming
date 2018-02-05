/**
  * *_strchr - locates a character in a string
  * @s: string to search
  * @c: character to search for
  *
  * Return: pointer to location of first character occurence
  *
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		if (s[i] == '\0')
			s = &s[i];
		else
			s = "";
			return (s);
}
