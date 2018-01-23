#include "holberton.h"
/**
 * _islower - checks for lowercase letter
 * @c: character to test
 *
 * Return: 1 if lower, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >=  97 && c <= 122)
		return (1);
	else
		return (0);
}

