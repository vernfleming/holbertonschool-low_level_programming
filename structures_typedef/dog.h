#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic deets of a dog
 *
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Description: as above
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
void free_dog(dog_t *d);

#endif

