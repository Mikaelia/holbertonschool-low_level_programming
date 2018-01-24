#include <stdio.h>

/**
 * main - prints sum of multiples of three and 5
 *
 * Return: 0
 */

int main(void)
{
	int sum;
	int n;

	for (n = 3; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
}
