#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int t = 1;
	int num = '0';

	for (i = 48; i <= 57; i++)
		for (j = 9; j > 0; j--)
			while (t < 10)
			{
				putchar(t);
				t++;
			}

		putchar('\n');
	return (0);
}
