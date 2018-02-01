#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 *
 * Return: neg integer, pos integer, or zero for smaller/greater/equal
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 < *s2)
			return (-15);
		if (*s1 > *s2)
			return (15);
		if (*s1 == *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (-15);
	return 0;
}
