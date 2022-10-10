#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

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

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* MAIN_H */
