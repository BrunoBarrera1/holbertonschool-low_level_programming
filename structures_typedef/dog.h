#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure made to represent a dawg
 * @name: Name (string)
 * @age: age (float)
 * @owner: owner string)
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
