/**
  * checkprime - returns prime number
  * @factor: factor test prime divisibility
  * @n: number to test for prime
  *
  * Return: 1 for prime, 0 otherwise
  */
int checkprime(int factor, int n)
{
	if (factor < n)
	{
		if (n % factor == 0)
			return (0);
		return (checkprime(++factor, n));
	}
		return (1);
}


#include "holberton.h"
/**
  * is_prime_number - calls checkprime
  * @n: number to test for prime
  *
  *
  * Return: 1 for prime, 0 otherwise
  */
int is_prime_number(int n)
{
	int factor;

	if (n <= 1)
		return (0);

	factor = 2;
	return (checkprime(factor, n));

}
