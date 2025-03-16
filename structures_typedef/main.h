#ifndef MAIN_H
#define MAIN_H

/* Structures, typedef  */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* MAIN_H */
