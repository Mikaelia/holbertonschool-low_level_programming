#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';
	int j;
	int y;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		y = i + 1;
		j = i;

		while (j < '9')
		{
			putchar(x);
			putchar(y);
			j++;
			if (!(x == '8' &&  y == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
