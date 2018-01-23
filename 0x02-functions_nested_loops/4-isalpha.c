#include "holberton.h"

/**
 * _isalpha - checks if char is letter
 * @c: value to test
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
