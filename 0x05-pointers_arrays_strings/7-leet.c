#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 *
 * @s: string
 *
 *
 * Return: char
 */
char *leet(char *s)
{
	int i;
	int j;

	char lower[6] = "aeotl";
	char upper[6] = "AEOTL";
	int nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = nums[j];
		}
	}
	return (s);
}
