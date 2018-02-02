#include "holberton.h"
/**
 * *rot13 - encodes a string  using rot13
 *
 * @s: string
 *
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i;
	int j;

	char lower[27] = "abcdefghijklmABCDEFGHIJKLM";
	char upper[27] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 26; j++)
		{
			if (s[i] == lower[j])
				s[i] += 13;
			else if (s[i] == upper[j])
				s[i] -= 13;
		}
	return (s);
}
