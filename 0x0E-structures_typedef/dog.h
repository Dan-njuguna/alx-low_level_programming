#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure containing details of a dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
struct dog
{
	char *name;
	float *age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float *age, char *owner);
void print_dog(struct dog *d);
typedef struct dog_t;
dog_t *new_dog(char *name, float *age, char *owner);
void free_dog(dog_t *Dog);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* ifndef DOG_H */
