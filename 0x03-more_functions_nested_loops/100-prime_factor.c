#include <stdio.h>
/**
  * main - finds largest prime factor
  *
  *
  * Return: Always 0.
  *
  */
int main(void)
{
	long int testnum;
	int prime;
	int i;

	prime = 0;
	testnum = 612852475143;

	for (i = 2; i <= testnum; i++)
	{
		while (testnum % i == 0 && i > prime)
		{
			prime = i;
			testnum /= i;
		}
	}
	printf("%d\n", prime);
	return (0);
}
