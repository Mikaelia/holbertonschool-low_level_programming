#include <stdlib.h>
#include <stdio.h>
/**
  * *argstostr - concatenates all arguments passed to program
  * @ac: number of arguments
  * @av: argument strings
  *
  * Return: pointer to multi-dimensional array
  */
char *argstostr(int ac, char **av)
{
	char *s;
	int i;
	int j;
	int k = 0;
	int length;

	if (ac == 0 || av == '\0')
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	s = malloc(sizeof(char) * (length + ac + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
