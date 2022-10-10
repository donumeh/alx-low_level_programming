#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - details about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: This struct holds elements and attributes about
 * a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - a new type of the struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
int _strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /* MAIN_H */
