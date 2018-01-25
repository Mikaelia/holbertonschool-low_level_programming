#include <stdio.h>
/**
  *main - print first 50 fibonnact numbers
  *
  *
  *Return: 0
  */
int main(void)
{
	int i;
	long int sum = 0;
	long int oldsum = 2;
	long int prev = 1;
	long int totalsum = 0;

	while (sum < 4000000)
	{
		sum = oldsum + prev;
		prev = oldsum;
		oldsum = sum;
		if (sum < 4000000 && sum % 2 == 0)
			totalsum += sum;
	}
	printf("%ld", totalsum);
	printf("\n");
	return (0);
}
