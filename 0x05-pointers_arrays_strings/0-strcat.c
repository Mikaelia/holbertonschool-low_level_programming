#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: points to destination string
 * @src: string to add to dest
 *
 * Return: pointer to dest
 *
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int i;

	for (count = 0; dest[count] != '\0'; count++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = src[i];
	return (dest);

}
