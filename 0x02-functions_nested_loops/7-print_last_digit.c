#include "holberton.h"
/**
 * print_last_digit - if char is letter
 * @a: number to print last digit of
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	a %= 10;

	if (a < 0)
		a *= -1;
	_putchar(a + '0');
	return (a);
}

