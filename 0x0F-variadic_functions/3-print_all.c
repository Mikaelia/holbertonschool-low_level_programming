#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * printchar - prints chars
  * @a: character to print
  * return: void
  */
void printchar(va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
  * printint - prints integers
  * @a: int to print
  * return: void
  */
void printint(va_list a)
{
	printf("%d", va_arg(a, int));
}
/**
  * printfloat - prints floats
  * @a: float to print
  * return: void
  */
void printfloat(va_list a)
{
	printf("%f", va_arg(a, double));
}
/**
  * printstring - prints strings
  * @a: string to print
  * return: void
  */
void printstring(va_list a)
{
	char *s;

	s = va_arg(a, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
  * print_all- prints anything
  * @format: what is passed in
  * return: void
  */
void print_all(const char * const format, ...)
{
	int i, j;
	char *s;

	prints printops[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};

	va_list typelist;

	i = 0;
	j = 0;
	s = "";

	va_start(typelist, format);

	while (format != NULL && format[i] != '\0')
	{
		while (printops[j].c != NULL)
		{
			if (*(printops[j].c) == format[i])
			{
				printf("%s", s);
				printops[j].p(typelist);
				s = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(typelist);
	printf("\n");
}

