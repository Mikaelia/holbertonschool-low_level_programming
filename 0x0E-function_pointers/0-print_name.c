#include <stdio.h>
#include <stdlib.h>
/**
  * print_name - prints a name
  * @name: name that is passed in
  * @f: pointer to print function
  *
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
