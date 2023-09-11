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

#endif
