#include <stdio.h>
/**
 * char *_strcpy - copies string to buffer dest
 *
 * @dest: pointer to buffer
 * @src: pointer to string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;
	int strlen;

	i = 0;
	j = 0;
	strlen = 0;

	while (src[i] != '\0')
	{
		strlen++;
		i++;
	}

	while (j < strlen && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
