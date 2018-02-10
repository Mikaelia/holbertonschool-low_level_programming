#include "holberton.h"

/**
 *_isupper - check thde code for Holberton School students.
 * @c: letter ot be tested
 * Return: 1 for upper 0 for lower
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
