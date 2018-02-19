#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - creates a new dog
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Return: NULL if function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	my_dog = (dog_t*)malloc(sizeof(dog_t));
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
