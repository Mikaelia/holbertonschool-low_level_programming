#include <stdio.h>
#include "holberton.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void printString(char *message)
{
	int i;
	int count = 0;

	while (message[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; ++i)
		_putchar(message[i]);
}
int main(void)
{
	char *message = "Holberton\n";

	printString(message);

	return (0);
}
