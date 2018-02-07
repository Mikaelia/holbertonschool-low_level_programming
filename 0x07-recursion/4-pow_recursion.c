#include "holberton.h"
/**
  * _pow_recursion - returns x to the yth power
  * @x: original value
  * @y: power to take
  *
  * Return: x to the yth power
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, --y));
}
