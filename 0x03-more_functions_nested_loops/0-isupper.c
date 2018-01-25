#include "holberton.h"

/**
 *_isupper - check thde code for Holberton School students.
 * @c: letter ot be tested
 * Return: Always 0
 *
 */
int _isupper(int c)
{
	if (c > 'A' && c > 'Z')
		return (1);
	else
		return (0);
}
