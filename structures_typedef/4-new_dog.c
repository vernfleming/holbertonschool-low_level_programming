#include <stdio.h>
#include <stdlib.h>  /* For malloc and free */
#include <string.h>  /* For memcpy */
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner) {
    /* Allocate memory for the new dog structure */
    dog_t *d = malloc(sizeof(dog_t));
    if (d == NULL) {  /* Check if malloc failed */
        return NULL;
    }

    /* Allocate memory for the name string and copy the content */
    if (name != NULL) {
        d->name = malloc(strlen(name) + 1);  /* +1 for the null terminator */
        if (d->name == NULL) {  /* Check if malloc failed */
            free(d);
            return NULL;
        }
        memcpy(d->name, name, strlen(name) + 1);  /* Copy the name */
    } else {
        d->name = NULL;  /* If name is NULL, set it to NULL */
    }

    /* Allocate memory for the owner string and copy the content */
    if (owner != NULL) {
        d->owner = malloc(strlen(owner) + 1);  /* +1 for the null terminator */
        if (d->owner == NULL) {  /* Check if malloc failed */
            free(d->name);
            free(d);
            return NULL;
        }
        memcpy(d->owner, owner, strlen(owner) + 1);  /* Copy the owner */
    } else {
        d->owner = NULL;  /* If owner is NULL, set it to NULL */
    }

    /* Set the age of the dog */
    d->age = age;

    return d;  /* Return the pointer to the newly created dog */
}
