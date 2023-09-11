#ifndef DOG_H
#define DOG_H

/*
 * file dog.h contain definition of new type struct for dogs
 * and prototype of all function that
 * will used in this directory
 */

/**
 * struct dog - structure for dogs
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: structure that contain info about dogs
 * name, age and their owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
