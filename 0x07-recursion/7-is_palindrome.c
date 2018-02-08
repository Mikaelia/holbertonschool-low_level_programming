
/**
  * findlen - find length of string
  * @s: string
  * @count: character count
  *
  * Return: string length
  */
int findlen(char *s, int count)
{
	if (*s)
	{
		return (1 + findlen(++s, count));
	}
	else
		return (count);
}

/**
  * comphalves - compares both halves of palindrome
  * @s: string to test
  * @strlen: length of string
  *
  * Return: 1 for palindrome, 0 otherwise
  */
int comphalves(char *s, int strlen)
{
	if (*s)
	{
		if (*s == *(s + strlen))
		{
			return (1);
			strlen--;
			return (comphalves(++s, strlen));
		}
		else
			return (0);
	}
	else
		return (0);
}

#include "holberton.h"
/**
  * is_palindrome - checks whether string is palindrome
  * @s: string to compare
  *
  *
  * Return: 1 for palendrome, 0 otherwise
  */
int is_palindrome(char *s)
{
	int count;
	int strlen;

	count = 0;

	strlen = (findlen(s, count) - 1);

	if (strlen < 0)
		return (0);
	return (comphalves(s, strlen));
}


