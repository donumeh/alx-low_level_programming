#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - a structure on dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: to create objects of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - New type def for dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* DOG_H */
