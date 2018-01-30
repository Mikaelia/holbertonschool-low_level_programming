#include "holberton.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: points to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
