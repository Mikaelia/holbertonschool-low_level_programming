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
	strlen = 0;

	while (src[i] != '\0')
	{
		strlen++;
		i++;
	}

	for (j = 0; j < strlen && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; i < strlen; i++)
		dest[i] = '\0';
	return (dest);
}
