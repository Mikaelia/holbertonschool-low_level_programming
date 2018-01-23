#include "holberton.h"
#include <stdio.h>
/**
 * print_last_digit - if char is letter
 * @a: number to print last digit of
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	if (a < 0)
		return (-1 * (a % 10));
	return(a % 10);
}
