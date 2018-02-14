#include <stdlib.h>
#include <stdio.h>

/**
  * findlength - finds length of strings
  * @s: string to count
  *
  *
  * Return: length of string
  */
int findlength(char *s)
{
	int length;

	while (*s != '\0')
	{
		++length;
		++s;
	}
	return (length);
}

/**
  * *str_concat - concatenates two strings
  * @s1: forst string
  * @s2: second string
  *
  * Return: pointer to newly allocated space in memory
  */
char *str_concat(char *s1, char *s2)
{
	char *newspace;
	int k;
	int l;
	int twostring, firststring, secondstring;
	k = 0;
	l = 0;

	firststring = findlength(s1);
	secondstring = findlength(s2);
	twostring = firststring + secondstring + 1;

	newspace = malloc(twostring * sizeof(char));

	if (newspace == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		newspace[k] = s1[k];
		++k;
	}
	while (s2[l] != '\0')
	{
		newspace[k] = s2[l];
		++l;
		++k;
	}
	newspace[k] = '\0';
	return (newspace);
}
