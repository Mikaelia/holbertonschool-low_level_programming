#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
/**
  * struct op - struct for functions
  * @c: operator to compare
  * @p: function to call
  */
typedef struct op
{
	char *c;
	void (*p)(va_list a);
} prints;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printchar(va_list a);
void printint(va_list a);
void printfloat(va_list a);
void printstring(va_list a);
#endif
