#include <stdio.h>
#include <stdlib.h>  /* For malloc and free */
#include <string.h>  /* For strlen */

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner) {
    /* Allocate memory for the new dog structure */
  int i;
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL) {  /* Check if malloc failed */
        return NULL;
    }

    /* Allocate memory for the name string and copy the content manually */
    if (name != NULL) {
        d->name = malloc(strlen(name) + 1);  /* +1 for the null terminator */
        if (d->name == NULL) {  /* Check if malloc failed */
            free(d);
            return NULL;
        }
        /* Manual string copy (without using memcpy or strdup) */
        for (i = 0; name[i] != '\0'; i++) {
            d->name[i] = name[i];
        }
        d->name[strlen(name)] = '\0';  /* Null terminate the string */
    } else {
        d->name = NULL;  /* If name is NULL, set it to NULL */
    }

    /* Allocate memory for the owner string and copy the content manually */
    if (owner != NULL) {
        d->owner = malloc(strlen(owner) + 1);  /* +1 for the null terminator */
        if (d->owner == NULL) {  /* Check if malloc failed */
            free(d->name);
            free(d);
            return NULL;
        }
        /* Manual string copy (without using memcpy or strdup) */
        for (i = 0; owner[i] != '\0'; i++) {
            d->owner[i] = owner[i];
        }
        d->owner[strlen(owner)] = '\0';  /* Null terminate the string */
    } else {
        d->owner = NULL;  /* If owner is NULL, set it to NULL */
    }

    /* Set the age of the dog */
    d->age = age;

    return d;  /* Return the pointer to the newly created dog */
}
