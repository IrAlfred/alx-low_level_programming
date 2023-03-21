#ifndef _DOG_H
#define _DOG_H

/**
 * dog - Typedef for struct dog
 */
typedef struct dog dog;

/**
 * struct dog - struct that stores informations of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
