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
	int i;
	int j;
	int count1;
	int count2;
	int ret;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			count1 = i;
		for (j = 0; s2[j] != '\0'; j++)
			count2 = j;
		if (count1 > count2)
			ret = 15;
		else if (count1 < count2)
			ret = -15;
		else
			ret = 0;
	}
	return ret;
}
