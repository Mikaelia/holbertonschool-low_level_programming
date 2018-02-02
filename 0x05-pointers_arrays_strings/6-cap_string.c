#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char sym[13] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		for (j = 0; j < 13; j++)
			while (s[i] == sym[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				break;
			}
	}
	return (s);
}
