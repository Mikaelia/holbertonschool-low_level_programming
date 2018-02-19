#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog structure
  * @name: first member
  * @age: second member
  * @owner: third member
  *
  * Description: A structure that defines a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
