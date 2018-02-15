#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * findlen - finds length of string
  * @s: string
  *
  * Return: length of string
  */
unsigned int findlen(char *s)
{
	unsigned int len = 0;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * *string_nconcat - concatenates two strings, n bytes of second string
  * @s1: string to place in memory
  * @s2: second string to concatenate
  * @n: bytes of second string to concatenate
  *
  * Return: pointer to the allocated memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int total, len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = findlen(s1);
	len2 = findlen(s2);

	if (n >= len2)
		n = len2;

	total = len1 + n;

	s = malloc(sizeof(char) * (total + n + 1));
	if (s == '\0')
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
