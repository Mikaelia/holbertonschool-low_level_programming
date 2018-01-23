#include "holberton.h"

/**
 * _abs - if char is letter
 * @a: number to take abs value of
 * Return: 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
		return (a);
}
