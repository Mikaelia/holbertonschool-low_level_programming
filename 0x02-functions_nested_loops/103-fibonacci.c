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
	long int sum = 3;
	long int oldsum = 2;
	long int prev = 1;

	printf("%ld, %ld, ", prev, oldsum);
	for (i = 0; i <= 100; i++)
	{
		sum = oldsum + prev;
		prev = oldsum;
		oldsum = sum;
		if (sum < 4000000 && sum % 2 == 0)
			printf("%ld, ", sum);
		if (sum > 4000000)
			break;
	}
	printf("\n");
	return (0);
}
