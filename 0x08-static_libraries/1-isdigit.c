#include "holberton.h"

/**
 * _isdigit - check thde code for Holberton School students.
 * @c: letter ot be tested
 * Return: 1 for digit 0 for non-digit
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
