#include <stdlib.h>
#include <stdio.h>
/**
  * **alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of array
  * @height: height of array
  *
  * Return: pointer to multi-dimensional array
  */
int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	if (height < 1 || width < 1)
		return (NULL);

	s = malloc(height * sizeof(int *));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			s[i][j] = 0;
	return (s);
}
