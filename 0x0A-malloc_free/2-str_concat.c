#include <stdlib.h>
#include <stdio.h>
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
	int i;
	int j;
	int k;
	int l;
	int twostring;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	if (s2 == NULL || s1 == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	j++;

	twostring = i + j;

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
