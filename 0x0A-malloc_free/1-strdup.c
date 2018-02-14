#include <stdlib.h>
#include <stdio.h>
/**
  * *_strdup - returns duplicate of string str
  * @str: string to duplicate
  *
  * Return: pointer to newly allocated space in memory
  */
char *_strdup(char *str)
{
	char *s;
	int i;
	int j;

	i = 0;
	j = 0;

	if (str == 0)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	s = malloc(i * sizeof(char));
	if (s == 0)
		return (NULL);
	while (j <= i)
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
