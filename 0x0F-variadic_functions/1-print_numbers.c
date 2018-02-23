#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: string printed between integers
  * @n: number of integers passed to the function
  *
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start (a, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
