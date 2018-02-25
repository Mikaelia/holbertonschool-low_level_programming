#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - a function that prints strings with newline
  * @separator: string printed between strings
  * @n: number of strings passed to the function
  *
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list arg;

	va_start(arg, n);

	s = va_arg(arg, char*);
	for (i = 0; i < n; i++)
	{
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		s = va_arg(arg, char*);
	}
	va_end(arg);
	printf("\n");
}
