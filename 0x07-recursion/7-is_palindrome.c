
/**
  * findlen - find length of string
  * @s: string
  * @count: character count
  *
  * Return: string length
  */
int findlen(char *s)
{
	if (*s)
		return (1 + findlen(++s));
	else
		return (0);
}

/**
  * checkpal - compares both halves of palindrome
  * @s: string to test
  * @strlen: length of string
  *
  * Return: 1 for palindrome, 0 otherwise
  */
int checkpal(char *s, int strlen)
{
	if (*s == '\0')
		return (1);
	if (*s)
	{
		if (*s == *(s + strlen))
		{
			strlen -= 2;
			return (checkpal(++s, strlen));
		}
		else
			return (0);
	}
	else
		return (0);
}

/**
  * is_palindrome - checks whether string is palindrome
  * @s: string to compare
  *
  *
  * Return: 1 for palendrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int strlen;

	strlen = (findlen(s));
	strlen--;

	return (checkpal(s, strlen));
}


