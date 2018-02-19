#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * print_dog - prints a struct dog
  * @d: pointer to struct
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->owner == NULL)
		printf("(nil)");
	if (!(d->age))
		printf("(nil)");
	if (d == NULL)
		return;
	printf ("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
