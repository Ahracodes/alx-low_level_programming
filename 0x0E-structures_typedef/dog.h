#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog structure
 *
 * @name: Name of dog
 *
 * @age: Age of dog
 *
 * @owner: legal owner of dog
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
void free_dog(dog_t *d);

#endif
