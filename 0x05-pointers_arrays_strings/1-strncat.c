#include "holberton.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: points to destination string
 * @src: string to add to dest
 * @n: max bytes to be used from src
 *
 * Return: pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int i;

	for (count = 0; dest[count] != '\0'; count++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		if  (i < n)
		{
			dest[count] = src[i];
		}
		count++;
	}
	return (dest);
}
