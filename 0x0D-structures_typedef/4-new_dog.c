#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strlen - counts string length
  * @s: reference string
  *
  * Return: NULL if function fails
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
  * copy - copy string to allocated space
  * @s: reference string
  * Return: NULL if function fails
  */
char *copy(char *s)
{
	int i;
	int length;
	char *dest;

	length = 0;
	length = _strlen(s);

	i = 0;
	dest = malloc(sizeof(char) * length + 1);
	if (dest == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
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
	char *namecopy;
	char *ownercopy;

	namecopy = copy(name);
	if (namecopy == NULL)
		return (NULL);

	ownercopy = copy(owner);
	if (ownercopy == NULL)
	{
		free(namecopy);
		return (NULL);
	}

	my_dog = (dog_t *)malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(ownercopy);
		free(namecopy);
		return (NULL);
	}

	my_dog->name = namecopy;
	my_dog->age = age;
	my_dog->owner = ownercopy;

	return (my_dog);
}
