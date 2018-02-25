#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * sum_them_all - returns sum of all parameters
  * @n: number of parameters passed in
  *
  * Return: sum of parameters or 0 if none
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	int sum;

	if (n == 0)
		return (0);

	va_start(a, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(a, int);
	va_end(a);
	return (sum);
}

