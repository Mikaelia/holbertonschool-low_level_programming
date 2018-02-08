/**
  * increment - finds square root multiples of num
  * @i: multiples to test
  * @n: num to find square root of
  *
  * Return: square root of num
  */
int increment(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if (i * i > n)
		return (-1);
	return (increment(++i, n));
}

#include "holberton.h"
/**
  * _sqrt_recursion - finds square root of number
  * @n: number to find square root of
  *
  *
  * Return: square root
  */
int _sqrt_recursion(int n)
{
	int val;

	val = 0;
	return (increment(val, n));
}
