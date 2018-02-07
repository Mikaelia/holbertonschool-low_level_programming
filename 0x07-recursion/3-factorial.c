#include "holberton.h"
/**
  * factorial - returns factorial of number
  * @n: number to take factorial of
  *
  *
  * Return: factorial
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial((n - 1)));
}
